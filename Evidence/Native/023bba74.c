/* IL2CPP: Dino.BusSand.App.UI.StoreWaitingPanel.<Spin>d__3$$MoveNext
bool Dino_BusSand_App_UI_StoreWaitingPanel__Spin_d__3__MoveNext (Dino_BusSand_App_UI_StoreWaitingPanel__Spin_d__3_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StoreWaitingPanel.<Spin>d__3$$MoveNext
   bool Dino_BusSand_App_UI_StoreWaitingPanel__Spin_d__3__MoveNext
   (Dino_BusSand_App_UI_StoreWaitingPanel__Spin_d__3_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_StoreWaitingPanel__Spin_d__3__MoveNext_22bba74(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  
  if ((bRam0000000004f9c30c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c30c = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(uint *)(param_1 + 0x10) < 2) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x20);
      fVar5 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
      if (lVar4 != 0) {
        UnityEngine_Transform__set_localEulerAngles_43d153c
                  (0,0,(float)(int)(fVar5 * 10.0) * -45.0,lVar4,0);
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return 0;
}

