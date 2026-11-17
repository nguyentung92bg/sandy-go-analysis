/* IL2CPP: Dino.Tracking.TrackingEventLoadingFinish$$WriteEventParameters
void Dino_Tracking_TrackingEventLoadingFinish__WriteEventParameters (Dino_Tracking_TrackingEventLoadingFinish_o* __this, System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventLoadingFinish$$WriteEventParameters
   void Dino_Tracking_TrackingEventLoadingFinish__WriteEventParameters
   (Dino_Tracking_TrackingEventLoadingFinish_o* __this,
   System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo* method); */

void Dino_Tracking_TrackingEventLoadingFinish__WriteEventParameters_247acc8
               (long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
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
  
  puVar3 = PTR_DAT_04cc1b90;
  puVar2 = PTR_DAT_04cac690;
                    /* try { // try from 0257acfc to 0267ad33 has its CatchHandler @ 0257b0a0 */
  if ((bRam0000000004f9cf2f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf440);
    FUN_02132f7c(PTR_DAT_04cc1b90);
    FUN_02132f7c(PTR_DAT_04cac690);
    FUN_02132f7c(PTR_DAT_04cb26d0);
    FUN_02132f7c(PTR_DAT_04cc1b98);
    FUN_02132f7c(PTR_DAT_04cc1ba0);
    FUN_02132f7c(PTR_DAT_04cb4b50);
    bRam0000000004f9cf2f = 1;
  }
  Dino_Tracking_TrackingEventLoadingBase_object___WriteSharedParameters_2f9af80
            (param_1,param_2,*(undefined8 *)puVar3);
                    /* try { // try from 0257ad74 to 0267ad9b has its CatchHandler @ 0257b114 */
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  Dino_Common_DinoTrackingParameter___ctor_2447518
            (&uStack_a0,*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x48),0);
  if (param_2 != 0) {
    lVar6 = *(long *)(param_2 + 0x10);
    lVar7 = *(long *)PTR_DAT_04cbf440;
                    /* try { // try from 0257ada8 to 0267adb7 has its CatchHandler @ 0257b100 */
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    puVar5 = PTR_DAT_04cc1ba0;
    puVar4 = PTR_DAT_04cc1b98;
    puVar3 = PTR_DAT_04cb4b50;
    puVar2 = PTR_DAT_04cb26d0;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(param_2 + 0x18);
                    /* try { // try from 0257add0 to 0267ade3 has its CatchHandler @ 0257b0f4 */
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = lVar6 + (long)(int)uVar1 * 0x30;
                    /* try { // try from 0257adfc to 0267adff has its CatchHandler @ 0257b06c */
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
                    /* try { // try from 0257ae18 to 0267ae1f has its CatchHandler @ 0257b0f0 */
        uStack_68 = uStack_98;
        uStack_70 = uStack_a0;
        uStack_58 = uStack_88;
        uStack_60 = uStack_90;
                    /* try { // try from 0257ae34 to 0267ae4f has its CatchHandler @ 0257b15c */
        uStack_48 = uStack_78;
        uStack_50 = uStack_80;
        System_Collections_Generic_List_DinoTrackingParameter___AddWithResize_3a149bc
                  (param_2,&uStack_70,
                   *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      Dino_Common_TrackingParameterBufferExtensions__AddOptional_24479dc
                (param_2,*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 0x50),0);
      Dino_Common_TrackingParameterBufferExtensions__AddOptional_2447d7c
                (param_2,*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x58),0);
                    /* try { // try from 0257ae6c to 0267ae6f has its CatchHandler @ 0257b0ec */
      Dino_Common_TrackingParameterBufferExtensions__AddOptional_2447b10
                (param_2,*(undefined8 *)puVar4,*(undefined8 *)(param_1 + 0x60),
                 *(undefined8 *)(param_1 + 0x68),0);
                    /* try { // try from 0257ae80 to 0267ae87 has its CatchHandler @ 0257b0e8 */
      Dino_Common_TrackingParameterBufferExtensions__AddOptional_24479dc
                (param_2,*(undefined8 *)puVar5,*(undefined8 *)(param_1 + 0x70),0);
                    /* try { // try from 0257ae98 to 0267ae9b has its CatchHandler @ 0257b0e4 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

