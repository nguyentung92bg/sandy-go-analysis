/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackIapPurchaseFailed
void Dino_Tracking_DinoEventTracking__TrackIapPurchaseFailed (System_String_o* placement, System_String_o* packName, double price, System_String_o* currency, Dino_Tracking_IapPurchaseFailedOptions_o* options, Dino_Tracking_CustomParams_o* custom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackIapPurchaseFailed
   void Dino_Tracking_DinoEventTracking__TrackIapPurchaseFailed (System_String_o* placement,
   System_String_o* packName, double price, System_String_o* currency,
   Dino_Tracking_IapPurchaseFailedOptions_o* options, Dino_Tracking_CustomParams_o* custom, const
   MethodInfo* method); */

void Dino_Tracking_DinoEventTracking__TrackIapPurchaseFailed_247cb7c
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 *param_5,undefined8 param_6)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long *plStack_48;
  
  if ((bRam0000000004f9cf4f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1d28);
    FUN_02132f7c(PTR_DAT_04cc1d30);
    FUN_02132f7c(PTR_DAT_04cc1d38);
    FUN_02132f7c(PTR_DAT_04cc1d40);
    bRam0000000004f9cf4f = 1;
  }
  plStack_48 = (long *)0x0;
  uVar2 = Dino_Tracking_DinoEventTracking__TryGetService_247bbe0(&plStack_48);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc1d40);
  Dino_Tracking_TrackingEventIapPurchaseFailed___ctor_2478b48(param_1,lVar3,param_2,param_3,param_4)
  ;
  if (((lVar3 != 0) &&
      (lVar3 = Dino_Tracking_TrackingEventIapBase_object___SetShowType_2f9a248
                         (lVar3,*param_5,*(undefined8 *)PTR_DAT_04cc1d30), lVar3 != 0)) &&
     (lVar3 = Dino_Tracking_TrackingEventIapBase_object___SetTriggerType_2f9a2a4
                        (lVar3,param_5[1],*(undefined8 *)PTR_DAT_04cc1d38), lVar3 != 0)) {
    *(undefined8 *)(lVar3 + 0x48) = param_5[2];
    thunk_FUN_02134474();
    *(undefined8 *)(lVar3 + 0x50) = param_5[3];
    thunk_FUN_02134474();
    Dino_Tracking_TrackingEventBase__MergeCustomParams_247b438(lVar3,param_6);
    plVar1 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      lVar4 = *plStack_48;
      lVar6 = *(long *)PTR_DAT_04cc1d28;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
            lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
            goto LAB_0257ccf0;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      lVar4 = FUN_0216b7a4(plStack_48);
LAB_0257ccf0:
      lVar4 = thunk_FUN_02150f88(*(undefined8 *)(lVar4 + 8),lVar6);
      (**(code **)(lVar4 + 8))(plVar1,lVar3,lVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

