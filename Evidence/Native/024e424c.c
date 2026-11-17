/* IL2CPP: Dino.BusSand.View.RoadLoopConfig$$OnValidate
void Dino_BusSand_View_RoadLoopConfig__OnValidate (Dino_BusSand_View_RoadLoopConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.RoadLoopConfig$$OnValidate
   void Dino_BusSand_View_RoadLoopConfig__OnValidate (Dino_BusSand_View_RoadLoopConfig_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_View_RoadLoopConfig__OnValidate_23e424c(void)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  
  if (cRam0000000004f9ca99 == '\0') {
    FUN_02132f7c(PTR_DAT_04cbda00);
    cRam0000000004f9ca99 = '\x01';
  }
  puVar2 = PTR_DAT_04cbda00;
  piVar3 = *(int **)(*(long *)PTR_DAT_04cbda00 + 0xb8);
  iVar1 = *piVar3;
  if (cRam0000000004f9ca9a == '\0') {
    FUN_02132f7c(PTR_DAT_04cbda00);
    cRam0000000004f9ca9a = '\x01';
    piVar3 = *(int **)(*(long *)puVar2 + 0xb8);
  }
  *piVar3 = iVar1 + 1;
  return;
}

