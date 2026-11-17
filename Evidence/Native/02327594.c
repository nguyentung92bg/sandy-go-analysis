/* IL2CPP: Dino.BusSand.App.Meta.BattleYachtPeriods$$Dow
int32_t Dino_BusSand_App_Meta_BattleYachtPeriods__Dow (System_String_o* v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleYachtPeriods$$Dow
   int32_t Dino_BusSand_App_Meta_BattleYachtPeriods__Dow (System_String_o* v, const MethodInfo*
   method); */

undefined8 Dino_BusSand_App_Meta_BattleYachtPeriods__Dow_2227594(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uStack_14;
  
  if ((bRam0000000004f9bdf8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9bdf8 = 1;
  }
  uStack_14 = 0;
  if ((param_1 != 0) && (iVar1 = System_String__IndexOf_46d72c4(param_1,0x2d,0), 0 < iVar1)) {
    uVar3 = System_String__Substring_46d4848(param_1,0,iVar1,0);
    uVar4 = System_Int32__TryParse_482de64(uVar3,&uStack_14,0);
    uVar2 = uStack_14;
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar2 = System_Math__Min_4831118(7,uVar2,0);
      uVar3 = System_Math__Max_4830fc8(1,uVar2,0);
      return uVar3;
    }
  }
  return 1;
}

