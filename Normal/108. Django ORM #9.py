from django.db.models import Model, QuerySet
from typing import Type

def delete_universities(University) -> None:
    University.objects.filter(students_count__lt=20).delete()
