/* IL2CPP: Dino.BusSand.Cheat.CheatBinding$$Label
System_String_o* Dino_BusSand_Cheat_CheatBinding__Label (Dino_BusSand_Cheat_CheatBinding_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatBinding$$Label
   System_String_o* Dino_BusSand_Cheat_CheatBinding__Label (Dino_BusSand_Cheat_CheatBinding_o*
   __this, const MethodInfo* method); */

long Dino_BusSand_Cheat_CheatBinding__Label_2359820(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_04ca9c30;
  if ((bRam0000000004f9c721 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba320);
    FUN_02132f7c(PTR_DAT_04cba328);
    FUN_02132f7c(PTR_DAT_04cba330);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c721 = 1;
  }
  lVar5 = *(long *)puVar2;
  if (*(char *)(param_1 + 0x20) != '\0') {
    lVar5 = System_String__Concat_46c82e0(lVar5,*(undefined8 *)PTR_DAT_04cba328,0);
  }
  if (*(char *)(param_1 + 0x21) != '\0') {
    lVar5 = System_String__Concat_46c82e0(lVar5,*(undefined8 *)PTR_DAT_04cba320,0);
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
    lVar5 = System_String__Concat_46c82e0(lVar5,*(undefined8 *)PTR_DAT_04cba330,0);
  }
  lVar3 = Dino_BusSand_Cheat_CheatBinding__KeyName_2359908(*(undefined4 *)(param_1 + 0x28));
  if ((lVar5 == 0) || (iVar1 = *(int *)(lVar5 + 0x10), iVar1 == 0)) {
    if ((lVar3 == 0) || (lVar5 = lVar3, *(int *)(lVar3 + 0x10) == 0)) {
      lVar5 = **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
    }
  }
  else if ((lVar3 != 0) && (*(int *)(lVar3 + 0x10) != 0)) {
    lVar4 = thunk_FUN_0216c29c(*(int *)(lVar3 + 0x10) + iVar1,lVar3,0);
    System_String__FillStringChecked_46d2a48(lVar4,0,lVar5);
    System_String__FillStringChecked_46d2a48(lVar4,iVar1,lVar3);
    lVar5 = lVar4;
  }
  return lVar5;
}

