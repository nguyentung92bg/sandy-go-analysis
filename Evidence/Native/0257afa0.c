/* IL2CPP: Dino.Tracking.TrackingEventLoadingStart$$WriteEventParameters
void Dino_Tracking_TrackingEventLoadingStart__WriteEventParameters (Dino_Tracking_TrackingEventLoadingStart_o* __this, System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventLoadingStart$$WriteEventParameters
   void Dino_Tracking_TrackingEventLoadingStart__WriteEventParameters
   (Dino_Tracking_TrackingEventLoadingStart_o* __this,
   System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo* method); */

void Dino_Tracking_TrackingEventLoadingStart__WriteEventParameters_247afa0
               (long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  
  puVar3 = PTR_DAT_04cc1bb8;
                    /* try { // try from 0257afa8 to 0267afab has its CatchHandler @ 0257b09c */
                    /* try { // try from 0257afc0 to 0267afc3 has its CatchHandler @ 0257b074 */
  if ((bRam0000000004f9cf32 & 1) == 0) {
                    /* try { // try from 0257afcc to 0267afcf has its CatchHandler @ 0257b398 */
                    /* try { // try from 0257afd0 to 0267afd3 has its CatchHandler @ 0257b358 */
    FUN_02132f7c(PTR_DAT_04cc1bb8);
                    /* try { // try from 0257afd4 to 0267afd7 has its CatchHandler @ 0257b10c */
                    /* try { // try from 0257afd8 to 0267afdb has its CatchHandler @ 0257b108 */
    bRam0000000004f9cf32 = 1;
  }
  puVar2 = PTR_DAT_04cc5fd8;
                    /* try { // try from 0257afdc to 0267afdf has its CatchHandler @ 0257b104 */
                    /* try { // try from 0257afe0 to 0267afe3 has its CatchHandler @ 0257b098 */
                    /* try { // try from 0257afe4 to 0267afe7 has its CatchHandler @ 0257b090 */
                    /* try { // try from 0257afe8 to 0267afeb has its CatchHandler @ 0257b114 */
                    /* try { // try from 0257afec to 0267afef has its CatchHandler @ 0257b0f0 */
                    /* try { // try from 0257aff0 to 0267aff3 has its CatchHandler @ 0257b08c */
                    /* try { // try from 0257aff4 to 0267aff7 has its CatchHandler @ 0257b15c */
  if ((bRam0000000004f9e741 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf440,param_2,*(undefined8 *)puVar3);
    FUN_02132f7c(PTR_DAT_04cc5fe0);
    FUN_02132f7c(PTR_DAT_04cc5fe8);
    FUN_02132f7c(PTR_DAT_04cc5ff0);
    FUN_02132f7c(PTR_DAT_04cc5fd8);
    FUN_02132f7c(PTR_DAT_04cb24f8);
    FUN_02132f7c(PTR_DAT_04cc5ff8);
    FUN_02132f7c(PTR_DAT_04cc6000);
    bRam0000000004f9e741 = 1;
  }
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  Dino_Common_DinoTrackingParameter___ctor_2447518
            (&uStack_a0,*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x18),0);
  puVar3 = PTR_DAT_04cbf440;
  if (param_2 != 0) {
    lVar6 = *(long *)(param_2 + 0x10);
    lVar7 = *(long *)PTR_DAT_04cbf440;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    puVar2 = PTR_DAT_04cb24f8;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(param_2 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = lVar6 + (long)(int)uVar1 * 0x30;
        *(uint *)(param_2 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar6 + 0x38) = uStack_88;
        *(undefined8 *)(lVar6 + 0x30) = uStack_90;
        *(undefined8 *)(lVar6 + 0x48) = uStack_78;
        *(undefined8 *)(lVar6 + 0x40) = uStack_80;
        *(undefined8 *)(lVar6 + 0x28) = uStack_98;
        *(undefined8 *)(lVar6 + 0x20) = uStack_a0;
        thunk_FUN_02134474(lVar6 + 0x20,0);
      }
      else {
        uStack_68 = uStack_98;
        uStack_70 = uStack_a0;
        uStack_58 = uStack_88;
        uStack_60 = uStack_90;
        uStack_48 = uStack_78;
        uStack_50 = uStack_80;
        System_Collections_Generic_List_DinoTrackingParameter___AddWithResize_3a149bc
                  (param_2,&uStack_70,
                   *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      Dino_Common_DinoTrackingParameter___ctor_2447518
                (&uStack_d0,*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x20),0);
      lVar6 = *(long *)(param_2 + 0x10);
      lVar7 = *(long *)puVar3;
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
      puVar2 = PTR_DAT_04cc5ff8;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(param_2 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          lVar6 = lVar6 + (long)(int)uVar1 * 0x30;
          *(uint *)(param_2 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + 0x38) = uStack_b8;
          *(undefined8 *)(lVar6 + 0x30) = uStack_c0;
          *(undefined8 *)(lVar6 + 0x48) = uStack_a8;
          *(undefined8 *)(lVar6 + 0x40) = uStack_b0;
          *(undefined8 *)(lVar6 + 0x28) = uStack_c8;
          *(undefined8 *)(lVar6 + 0x20) = uStack_d0;
          thunk_FUN_02134474(lVar6 + 0x20,0);
        }
        else {
          uStack_68 = uStack_c8;
          uStack_70 = uStack_d0;
          uStack_58 = uStack_b8;
          uStack_60 = uStack_c0;
          uStack_48 = uStack_a8;
          uStack_50 = uStack_b0;
          System_Collections_Generic_List_DinoTrackingParameter___AddWithResize_3a149bc
                    (param_2,&uStack_70,
                     *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        Dino_Common_DinoTrackingParameter___ctor_2447518
                  (&uStack_100,*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x28),0);
        lVar6 = *(long *)(param_2 + 0x10);
        lVar7 = *(long *)puVar3;
        *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
        puVar5 = PTR_DAT_04cc6000;
        puVar4 = PTR_DAT_04cc5ff0;
        puVar2 = PTR_DAT_04cc5fe8;
        puVar3 = PTR_DAT_04cc5fe0;
        if (lVar6 != 0) {
          uVar1 = *(uint *)(param_2 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            lVar6 = lVar6 + (long)(int)uVar1 * 0x30;
            *(uint *)(param_2 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar6 + 0x38) = uStack_e8;
            *(undefined8 *)(lVar6 + 0x30) = uStack_f0;
            *(undefined8 *)(lVar6 + 0x48) = uStack_d8;
            *(undefined8 *)(lVar6 + 0x40) = uStack_e0;
            *(undefined8 *)(lVar6 + 0x28) = uStack_f8;
            *(undefined8 *)(lVar6 + 0x20) = uStack_100;
            thunk_FUN_02134474(lVar6 + 0x20,0);
          }
          else {
            uStack_68 = uStack_f8;
            uStack_70 = uStack_100;
            uStack_58 = uStack_e8;
            uStack_60 = uStack_f0;
            uStack_48 = uStack_d8;
            uStack_50 = uStack_e0;
            System_Collections_Generic_List_DinoTrackingParameter___AddWithResize_3a149bc
                      (param_2,&uStack_70,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          Dino_Common_TrackingParameterBufferExtensions__AddOptional_2447d7c
                    (param_2,*(undefined8 *)puVar5,*(undefined8 *)(param_1 + 0x30),0);
          Dino_Common_TrackingParameterBufferExtensions__AddOptional_2447d7c
                    (param_2,*(undefined8 *)puVar4,*(undefined8 *)(param_1 + 0x38),0);
          Dino_Common_TrackingParameterBufferExtensions__AddOptional_Int32Enum__28d9b4c
                    (param_2,*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x40),
                     *(undefined8 *)puVar3);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

