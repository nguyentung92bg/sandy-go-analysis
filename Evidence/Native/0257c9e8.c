/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackIapPurchaseSuccess
void Dino_Tracking_DinoEventTracking__TrackIapPurchaseSuccess (System_String_o* placement, System_String_o* packName, double price, System_String_o* currency, Dino_Tracking_IapPurchaseSuccessOptions_o* options, Dino_Tracking_CustomParams_o* custom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoEventTracking$$TrackIapPurchaseSuccess
   void Dino_Tracking_DinoEventTracking__TrackIapPurchaseSuccess (System_String_o* placement,
   System_String_o* packName, double price, System_String_o* currency,
   Dino_Tracking_IapPurchaseSuccessOptions_o* options, Dino_Tracking_CustomParams_o* custom, const
   MethodInfo* method); */

void Dino_Tracking_DinoEventTracking__TrackIapPurchaseSuccess_247c9e8
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
  
  if ((bRam0000000004f9cf4e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1d08);
    FUN_02132f7c(PTR_DAT_04cc1d10);
    FUN_02132f7c(PTR_DAT_04cc1d18);
    FUN_02132f7c(PTR_DAT_04cc1d20);
    bRam0000000004f9cf4e = 1;
  }
  plStack_48 = (long *)0x0;
  uVar2 = Dino_Tracking_DinoEventTracking__TryGetService_247bbe0(&plStack_48);
  if ((uVar2 & 1) == 0) {
    return;
  }
                    /* try { // try from 0257ca74 to 0267ca77 has its CatchHandler @ 0257ca88 */
                    /* try { // try from 0257ca78 to 0267caab has its CatchHandler @ 0257c850 */
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc1d20);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0257c95c with catch @ 0257ca7c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0257c978 with catch @ 0257ca80
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0257c984 with catch @ 0257ca84
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0257ca74 with catch @ 0257ca88
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0257c960 with catch @ 0257ca8c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0257c940 with catch @ 0257ca90
                        */
  Dino_Tracking_TrackingEventIapPurchaseSuccess___ctor_2478f00
            (param_1,lVar3,param_2,param_3,param_4);
                    /* try { // try from 0257caac to 0267caaf has its CatchHandler @ 0257cac8 */
                    /* try { // try from 0257cab0 to 0267cacb has its CatchHandler @ 0257c850 */
                    /* catch() { ... } // from try @ 0257caac with catch @ 0257cac8 */
                    /* try { // try from 0257cacc to 0267cad3 has its CatchHandler @ 0257cadc */
                    /* try { // try from 0257cad4 to 0267cadf has its CatchHandler @ 0257c850 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0257cacc with catch @ 0257cadc
                        */
  if ((((lVar3 == 0) ||
       (lVar3 = Dino_Tracking_TrackingEventIapBase_object___SetShowType_2f9a248
                          (lVar3,*param_5,*(undefined8 *)PTR_DAT_04cc1d10), lVar3 == 0)) ||
      (lVar3 = Dino_Tracking_TrackingEventIapBase_object___SetTriggerType_2f9a2a4
                         (lVar3,param_5[1],*(undefined8 *)PTR_DAT_04cc1d18), lVar3 == 0)) ||
     (Dino_Tracking_TrackingEventBase__MergeCustomParams_247b438(lVar3,param_6), plVar1 = plStack_48
     , plStack_48 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar4 = *plStack_48;
  lVar6 = *(long *)PTR_DAT_04cc1d08;
  uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar2 != 0) {
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
        lVar4 = lVar4 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
        goto LAB_0257cb3c;
      }
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar2 != 0);
  }
  lVar4 = FUN_0216b7a4(plStack_48);
LAB_0257cb3c:
  lVar4 = thunk_FUN_02150f88(*(undefined8 *)(lVar4 + 8),lVar6);
  (**(code **)(lVar4 + 8))(plVar1,lVar3,lVar4);
  return;
}

