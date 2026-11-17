/* IL2CPP: Dino.Tracking.TrackingEventAdOfferShown$$WriteEventParameters
void Dino_Tracking_TrackingEventAdOfferShown__WriteEventParameters (Dino_Tracking_TrackingEventAdOfferShown_o* __this, System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventAdOfferShown$$WriteEventParameters
   void Dino_Tracking_TrackingEventAdOfferShown__WriteEventParameters
   (Dino_Tracking_TrackingEventAdOfferShown_o* __this,
   System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo* method); */

void Dino_Tracking_TrackingEventAdOfferShown__WriteEventParameters_2477fd8
               (long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_04caa7f0;
                    /* catch() { ... } // from try @ 02577f9c with catch @ 02577fd8 */
                    /* catch() { ... } // from try @ 02577eb4 with catch @ 02577fdc */
                    /* catch() { ... } // from try @ 02577e9c with catch @ 02577fe0 */
                    /* try { // try from 02577ffc to 02677fff has its CatchHandler @ 025781b8 */
                    /* try { // try from 02578000 to 0267819b has its CatchHandler @ 02577c20 */
  if ((bRam0000000004f9cee8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf440);
    FUN_02132f7c(PTR_DAT_04caa7f0);
    FUN_02132f7c(PTR_DAT_04caa870);
    bRam0000000004f9cee8 = 1;
  }
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  Dino_Common_DinoTrackingParameter___ctor_2447518
            (&uStack_90,*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x18),0);
  puVar2 = PTR_DAT_04cbf440;
  if (param_2 != 0) {
    lVar4 = *(long *)(param_2 + 0x10);
    lVar5 = *(long *)PTR_DAT_04cbf440;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    puVar3 = PTR_DAT_04caa870;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(param_2 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        lVar4 = lVar4 + (long)(int)uVar1 * 0x30;
        *(uint *)(param_2 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar4 + 0x38) = uStack_78;
        *(undefined8 *)(lVar4 + 0x30) = uStack_80;
        *(undefined8 *)(lVar4 + 0x48) = uStack_68;
        *(undefined8 *)(lVar4 + 0x40) = uStack_70;
        *(undefined8 *)(lVar4 + 0x28) = uStack_88;
        *(undefined8 *)(lVar4 + 0x20) = uStack_90;
        thunk_FUN_02134474(lVar4 + 0x20,0);
      }
      else {
        uStack_58 = uStack_88;
        uStack_60 = uStack_90;
        uStack_48 = uStack_78;
        uStack_50 = uStack_80;
        uStack_38 = uStack_68;
        uStack_40 = uStack_70;
        System_Collections_Generic_List_DinoTrackingParameter___AddWithResize_3a149bc
                  (param_2,&uStack_60,
                   *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      Dino_Common_DinoTrackingParameter___ctor_2447518
                (&uStack_c0,*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 0x20),0);
      lVar4 = *(long *)(param_2 + 0x10);
      lVar5 = *(long *)puVar2;
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
      if (lVar4 != 0) {
        uVar1 = *(uint *)(param_2 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          lVar4 = lVar4 + (long)(int)uVar1 * 0x30;
          *(uint *)(param_2 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar4 + 0x38) = uStack_a8;
          *(undefined8 *)(lVar4 + 0x30) = uStack_b0;
          *(undefined8 *)(lVar4 + 0x48) = uStack_98;
          *(undefined8 *)(lVar4 + 0x40) = uStack_a0;
          *(undefined8 *)(lVar4 + 0x28) = uStack_b8;
          *(undefined8 *)(lVar4 + 0x20) = uStack_c0;
          thunk_FUN_02134474(lVar4 + 0x20,0);
        }
        else {
          uStack_58 = uStack_b8;
          uStack_60 = uStack_c0;
          uStack_48 = uStack_a8;
          uStack_50 = uStack_b0;
          uStack_38 = uStack_98;
          uStack_40 = uStack_a0;
          System_Collections_Generic_List_DinoTrackingParameter___AddWithResize_3a149bc
                    (param_2,&uStack_60,
                     *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
                    /* try { // try from 0257819c to 026781a3 has its CatchHandler @ 02578214 */
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

