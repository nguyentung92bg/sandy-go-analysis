/* IL2CPP: Dino.BusSand.App.UI.PostWinFlow.<Show>d__2<object>$$MoveNext
bool Dino_BusSand_App_UI_PostWinFlow__Show_d__2_object___MoveNext (Dino_BusSand_App_UI_PostWinFlow__Show_d__2_T__o* __this, const MethodInfo_34E7A6C* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.PostWinFlow.<Show>d__2<object>$$MoveNext
   bool Dino_BusSand_App_UI_PostWinFlow__Show_d__2_object___MoveNext
   (Dino_BusSand_App_UI_PostWinFlow__Show_d__2_T__o* __this, const MethodInfo_34E7A6C* method); */

undefined8
Dino_BusSand_App_UI_PostWinFlow__Show_d__2_object___MoveNext_34e7a6c(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  if ((bRam0000000004f9fa50 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac7c8);
    FUN_02132f7c(PTR_DAT_04cb5310);
    FUN_02132f7c(PTR_DAT_04caca88);
    bRam0000000004f9fa50 = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  iVar1 = *(int *)(param_1 + 0x10);
  uVar3 = 0;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar3,0,0);
      if ((uVar4 & 1) != 0) {
        return 0;
      }
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_035e7c94;
      uVar3 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                        (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),2,
                         *(undefined8 *)(param_1 + 0x30),
                         *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 8));
      *(undefined8 *)(param_1 + 0x38) = uVar3;
      thunk_FUN_02134474();
    }
    else {
      if (iVar1 != 1) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_035e7c94;
      if (*(char *)(*(long *)(param_1 + 0x38) + 0x2c) == '\0') {
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
        uVar5 = 1;
        uVar3 = 1;
        goto LAB_035e7c84;
      }
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
    uVar3 = 1;
    uVar5 = 2;
  }
  else if (iVar1 - 2U < 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x20) == 0) {
LAB_035e7c94:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar4 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                      (*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_04cac7c8);
    if ((uVar4 & 1) == 0) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_035e7c94;
      uVar4 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                        (*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_04cb5310);
      if ((uVar4 & 1) == 0) {
        uVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
        UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(_UNK_00e201f4,uVar3,0);
        *(undefined8 *)(param_1 + 0x18) = uVar3;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar3);
        uVar3 = 1;
        uVar5 = 4;
        goto LAB_035e7c84;
      }
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
    uVar3 = 1;
    uVar5 = 3;
  }
  else {
    if (iVar1 != 4) {
      return 0;
    }
    uVar5 = 0xffffffff;
                    /* try { // try from 035e7b5c to 036e7e53 has its CatchHandler @ 035e617c */
  }
LAB_035e7c84:
  *(undefined4 *)(param_1 + 0x10) = uVar5;
  return uVar3;
}

