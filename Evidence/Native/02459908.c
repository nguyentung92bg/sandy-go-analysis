/* IL2CPP: Dino.BusSand.Cheat.CheatBinding$$KeyName
System_String_o* Dino_BusSand_Cheat_CheatBinding__KeyName (int32_t k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatBinding$$KeyName
   System_String_o* Dino_BusSand_Cheat_CheatBinding__KeyName (int32_t k, const MethodInfo* method);
    */

long Dino_BusSand_Cheat_CheatBinding__KeyName_2359908(int param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  int iStack_28;
  
  if ((bRam0000000004f9c722 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba318);
    FUN_02132f7c(PTR_DAT_04cba338);
    FUN_02132f7c(PTR_DAT_04cba340);
    FUN_02132f7c(PTR_DAT_04cba348);
    FUN_02132f7c(PTR_DAT_04cb46c8);
    FUN_02132f7c(PTR_DAT_04cba350);
    bRam0000000004f9c722 = 1;
  }
  if (param_1 < 0x113) {
    plVar3 = (long *)PTR_DAT_04cba350;
    if ((param_1 != 0x111) && (plVar3 = (long *)PTR_DAT_04cba340, param_1 != 0x112)) {
LAB_024599b4:
      uStack_38 = *(undefined8 *)PTR_DAT_04cba318;
      uStack_30 = 0xffffffffffffffff;
      iStack_28 = param_1;
      lVar1 = System_Enum__ToString_4863070(&uStack_38,0);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar2 = System_String__StartsWith_46d117c(lVar1,*(undefined8 *)PTR_DAT_04cba348,0);
      if ((uVar2 & 1) == 0) {
        return lVar1;
      }
      lVar1 = System_String__Substring_46d6a94(lVar1,5,0);
      return lVar1;
    }
  }
  else {
    plVar3 = (long *)PTR_DAT_04cb46c8;
    if ((param_1 != 0x113) && (plVar3 = (long *)PTR_DAT_04cba338, param_1 != 0x114))
    goto LAB_024599b4;
  }
  return *plVar3;
}

