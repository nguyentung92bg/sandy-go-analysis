/* IL2CPP: Dino.Tracking.ServerTrackingCore$$Enqueue
void Dino_Tracking_ServerTrackingCore__Enqueue (Dino_Tracking_ServerTrackingCore_o* __this, System_String_o* eventName, Dino_Common_DinoTrackingParameter_array* parameters, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ServerTrackingCore$$Enqueue
   void Dino_Tracking_ServerTrackingCore__Enqueue (Dino_Tracking_ServerTrackingCore_o* __this,
   System_String_o* eventName, Dino_Common_DinoTrackingParameter_array* parameters, const
   MethodInfo* method); */

void Dino_Tracking_ServerTrackingCore__Enqueue_2460e14
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000004f9ce24 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc0a28);
    FUN_02132f7c(PTR_DAT_04cc0a00);
    bRam0000000004f9ce24 = 1;
  }
  uVar2 = System_String__IsNullOrEmpty_46d2084(param_2,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 != 0) {
    lVar6 = *(long *)(param_1 + 0x40);
    uVar3 = (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28))
    ;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_78 = param_2;
    thunk_FUN_02134474(&uStack_78,param_2);
    uStack_70 = uVar3;
    uStack_68 = param_3;
    thunk_FUN_02134474(&uStack_68,param_3);
    if (lVar6 != 0) {
      lVar4 = *(long *)(lVar6 + 0x10);
      lVar5 = *(long *)PTR_DAT_04cc0a28;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar4 != 0) {
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          lVar4 = lVar4 + (long)(int)uVar1 * 0x18;
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar4 + 0x30) = uStack_68;
          *(undefined8 *)(lVar4 + 0x28) = uStack_70;
          *(undefined8 *)(lVar4 + 0x20) = uStack_78;
          thunk_FUN_02134474(lVar4 + 0x20,0);
        }
        else {
          uStack_58 = uStack_70;
          uStack_60 = uStack_78;
          uStack_50 = uStack_68;
          System_Collections_Generic_List_ServerTrackingCore_PendingEvent___AddWithResize_2a97f10
                    (lVar6,&uStack_60,
                     *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        if (*(long *)(param_1 + 0x40) != 0) {
          if (*(int *)(*(long *)(param_1 + 0x40) + 0x18) < *(int *)(param_1 + 0x10)) {
            return;
          }
          *(undefined1 *)(param_1 + 0x4c) = 1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

