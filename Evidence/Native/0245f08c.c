/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$JumpTo
void Dino_BusSand_Cheat_CheatManager__JumpTo (Dino_BusSand_Cheat_CheatManager_o* __this, System_String_o* text, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$JumpTo
   void Dino_BusSand_Cheat_CheatManager__JumpTo (Dino_BusSand_Cheat_CheatManager_o* __this,
   System_String_o* text, const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__JumpTo_235f08c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  int iStack_24;
  
  if ((bRam0000000004f9c769 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba530);
    FUN_02132f7c(PTR_DAT_04cba538);
    bRam0000000004f9c769 = 1;
  }
  iStack_24 = 0;
  if (param_2 != 0) {
    uVar1 = System_String__Trim_46d6ee0(param_2,0);
    uVar2 = System_Int32__TryParse_482de64(uVar1,&iStack_24,0);
    if ((((uVar2 & 1) != 0) && (0 < iStack_24)) && (iStack_24 < 100000)) {
      Dino_BusSand_Cheat_CheatManager__GoLevel_235e95c
                (param_1,iStack_24,*(undefined8 *)PTR_DAT_04cba530);
      return;
    }
    Dino_BusSand_Cheat_CheatManager__Toast_235dbd8(param_1,*(undefined8 *)PTR_DAT_04cba538);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

