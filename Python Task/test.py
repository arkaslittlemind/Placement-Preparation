import pandas as pd

# Your data
data = {
    'MALIGNANCY': ['OVARY', 'OVARY', 'SEX CORD STROMAL', 'BREAST', 'BREAST', 'VAGINAL VAULT', 'BREAST', 'BREAST', 'ENDOMETRIUM', 'BREAST', 'ENDOMETRIUM', 'OVARY', 'CERVIX', 'TONGUE', 'PYRIFORM FOSSA', 'BREAST', 'BREAST', 'BREAST', 'GLIOMA', 'BREAST', 'BREAST', 'TONGUE', 'OVARY', 'BREAST', 'BREAST', 'OVARY', 'BREAST', 'OVARY', 'HYPOPHARYNX', 'PYRIFORM FOSSA', 'OVARY', 'BREAST', 'BREAST', 'OVARY', 'VAGINAL VAULT', 'TONSIL', 'BREAST', 'OVARY', 'CERVIX', 'GLIOMA', 'BREAST', 'BREAST', 'TONGUE', 'OVARY', 'BREAST', 'PYRIFORM FOSSA', 'TONGUE', 'BREAST', 'OVARY', 'HYPOPHARYNX', 'PYRIFORM FOSSA', 'OVARY', 'BREAST', 'BREAST', 'OVARY', 'VAGINAL VAULT', 'TONSIL', 'BREAST', 'TONGUE', 'CERVIX', 'OVARY', 'OVARY', 'GLIOMA', 'BREAST', 'BREAST', 'VAGINAL VAULT', 'BREAST', 'BREAST', 'ENDOMETRIUM', 'BREAST', 'PYRIFORM FOSSA', 'OVARY', 'CERVIX', 'TONGUE', 'PYRIFORM FOSSA', 'BREAST', 'BREAST', 'HYPOPHARYNX'],
    'STAGE': ['III', 'II', 'III', 'II', 'III', 'IV', 'II', 'II', 'II', 'III', 'III', 'II', 'IV', 'IV', 'II', 'IV', 'IV', 'IV', 'IV', 'IV', 'III', 'II', 'III', 'III', 'IV', 'II', 'III', 'III', 'II', 'II', 'IV', 'III', 'I', 'IV', 'III', 'II', 'IV', 'III', 'II', 'IV', 'IV', 'II', 'III', 'II', 'IV', 'IV', 'III', 'II', 'III', 'II', 'IV', 'III', 'I', 'IV', 'III', 'II', 'II', 'IV', 'III', 'II', 'III', 'IV', 'II', 'II', 'II', 'III', 'II', 'IV', 'III', 'III', 'II', 'IV', 'IV', 'II', 'III', 'I', 'IV', 'III', 'II', 'III', 'IV', 'IV', 'II']
}

# Creating a DataFrame
df = pd.DataFrame(data)

# Counting the frequency of "OVARY" in STAGE "I"
ovary_count = df[(df['MALIGNANCY'] == 'OVARY') & (df['STAGE'] == 'I')].shape[0]

# Displaying the result
print(f"The frequency of 'OVARY' in STAGE 'I' is: {ovary_count}")
