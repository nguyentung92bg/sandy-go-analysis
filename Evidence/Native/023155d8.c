/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$AdPlacement
System_String_o* Dino_BusSand_App_Meta_GameTracking__AdPlacement (System_String_o* slot, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$AdPlacement
   System_String_o* Dino_BusSand_App_Meta_GameTracking__AdPlacement (System_String_o* slot, const
   MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_GameTracking__AdPlacement_22155d8(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  
  if ((bRam0000000004f9bd55 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cad078);
    FUN_02132f7c(PTR_DAT_04caad48);
    FUN_02132f7c(PTR_DAT_04cacb68);
    FUN_02132f7c(PTR_DAT_04cb24a8);
    FUN_02132f7c(PTR_DAT_04cacb80);
    FUN_02132f7c(PTR_DAT_04cacb88);
    FUN_02132f7c(PTR_DAT_04cb24b0);
    FUN_02132f7c(PTR_DAT_04cad088);
    FUN_02132f7c(PTR_DAT_04cb2358);
    FUN_02132f7c(PTR_DAT_04cb24b8);
    FUN_02132f7c(PTR_DAT_04cb2460);
    FUN_02132f7c(PTR_DAT_04cac650);
    FUN_02132f7c(PTR_DAT_04caca98);
    FUN_02132f7c(PTR_DAT_04cac740);
    bRam0000000004f9bd55 = 1;
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash_22a1900(param_1,0);
  if (uVar2 < 0x2cd94bbb) {
    if (uVar2 == 0x4b13981) {
      uVar4 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)PTR_DAT_04cad078,0);
      puVar7 = (undefined8 *)PTR_DAT_04cb24b8;
    }
    else if (uVar2 == 0x137f57d2) {
      uVar4 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)PTR_DAT_04cacb88,0);
      puVar7 = (undefined8 *)PTR_DAT_04cb2358;
    }
    else {
      if (uVar2 != 0x2cd94bba) goto LAB_02315844;
      uVar4 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)PTR_DAT_04cad088,0);
      puVar7 = (undefined8 *)PTR_DAT_04cb24b0;
    }
joined_r0x02315834:
    if ((uVar4 & 1) != 0) goto LAB_0231585c;
  }
  else {
    if (uVar2 < 0x6914b111) {
      if (uVar2 == 0x4bf761b2) {
        uVar4 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)PTR_DAT_04caca98,0);
        puVar7 = (undefined8 *)PTR_DAT_04cb2460;
      }
      else {
        if (uVar2 != 0x6914b110) goto LAB_02315844;
        uVar4 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)PTR_DAT_04cac740,0);
        puVar7 = (undefined8 *)PTR_DAT_04cac650;
      }
      goto joined_r0x02315834;
    }
    puVar7 = (undefined8 *)PTR_DAT_04cacb68;
    if ((uVar2 == 0xe2a8835a) || (puVar7 = (undefined8 *)PTR_DAT_04cacb80, uVar2 == 0xf4ebe9e4)) {
      uVar4 = System_String__op_Equality_46d1108(param_1,*puVar7,0);
      puVar7 = (undefined8 *)PTR_DAT_04cb24a8;
      goto joined_r0x02315834;
    }
  }
LAB_02315844:
  uVar4 = System_String__IsNullOrEmpty_46d2084(param_1,0);
  puVar7 = (undefined8 *)PTR_DAT_04caad48;
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar1 = PTR_DAT_04ca9b78;
    if ((bRam0000000004f9bd5e & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9b78);
      bRam0000000004f9bd5e = 1;
    }
    plVar5 = (long *)thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    System_Text_StringBuilder___ctor_46db61c(plVar5,0);
    puVar1 = PTR_DAT_04ca9ac8;
    if (param_1 != 0) {
      if (0 < *(int *)(param_1 + 0x10)) {
        iVar9 = 0;
        do {
          uVar3 = System_String__get_Chars_46ccb24(param_1,iVar9,0);
          lVar8 = *(long *)(puVar1 + 0x88);
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_0218fdac(lVar8);
          }
          uVar4 = System_Char__IsUpper_47bc0d8(uVar3,0);
          if ((iVar9 != 0) && ((uVar4 & 1) != 0)) {
            if (plVar5 == (long *)0x0) goto LAB_023159ac;
            System_Text_StringBuilder__Append_46dd710(plVar5,0x5f,0);
          }
          if (*(int *)(*(long *)(puVar1 + 0x88) + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar3 = System_Char__ToLowerInvariant_47bc5f4(uVar3,0);
          if (plVar5 == (long *)0x0) goto LAB_023159ac;
          System_Text_StringBuilder__Append_46dd710(plVar5,uVar3,0);
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)(param_1 + 0x10));
      }
      if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x023159a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        return uVar6;
      }
    }
LAB_023159ac:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_0231585c:
  return *puVar7;
}

