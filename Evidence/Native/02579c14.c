/* IL2CPP: Dino.Tracking.TrackingEventFeatureFirstShow$$WriteEventParameters
void Dino_Tracking_TrackingEventFeatureFirstShow__WriteEventParameters (Dino_Tracking_TrackingEventFeatureFirstShow_o* __this, System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventFeatureFirstShow$$WriteEventParameters
   void Dino_Tracking_TrackingEventFeatureFirstShow__WriteEventParameters
   (Dino_Tracking_TrackingEventFeatureFirstShow_o* __this,
   System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo* method); */

void Dino_Tracking_TrackingEventFeatureFirstShow__WriteEventParameters_2479c14
               (long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
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
  
  puVar2 = PTR_DAT_04cc1aa8;
  if ((bRam0000000004f9cf12 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1aa8);
    bRam0000000004f9cf12 = 1;
  }
  puVar3 = PTR_DAT_04cc5f88;
  if ((bRam0000000004f9e73c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf440,param_2,*(undefined8 *)puVar2);
    FUN_02132f7c(PTR_DAT_04cc5f90);
    FUN_02132f7c(PTR_DAT_04cc5f68);
    FUN_02132f7c(PTR_DAT_04cc5f98);
    FUN_02132f7c(PTR_DAT_04cc5fa0);
    FUN_02132f7c(PTR_DAT_04cc5f88);
    FUN_02132f7c(PTR_DAT_04cc5fa8);
    FUN_02132f7c(PTR_DAT_04cc5fb0);
    FUN_02132f7c(PTR_DAT_04caa870);
    bRam0000000004f9e73c = 1;
  }
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  Dino_Common_DinoTrackingParameter___ctor_2447518
            (&uStack_b0,*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 0x18),0);
  if (param_2 != 0) {
    lVar9 = *(long *)(param_2 + 0x10);
    lVar10 = *(long *)PTR_DAT_04cbf440;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    puVar8 = PTR_DAT_04cc5fb0;
    puVar7 = PTR_DAT_04cc5fa8;
    puVar6 = PTR_DAT_04cc5fa0;
    puVar5 = PTR_DAT_04cc5f98;
    puVar4 = PTR_DAT_04cc5f90;
    puVar3 = PTR_DAT_04cc5f68;
    puVar2 = PTR_DAT_04caa870;
    if (lVar9 != 0) {
      uVar1 = *(uint *)(param_2 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        lVar9 = lVar9 + (long)(int)uVar1 * 0x30;
        *(uint *)(param_2 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar9 + 0x38) = uStack_98;
        *(undefined8 *)(lVar9 + 0x30) = uStack_a0;
        *(undefined8 *)(lVar9 + 0x48) = uStack_88;
        *(undefined8 *)(lVar9 + 0x40) = uStack_90;
        *(undefined8 *)(lVar9 + 0x28) = uStack_a8;
        *(undefined8 *)(lVar9 + 0x20) = uStack_b0;
        thunk_FUN_02134474(lVar9 + 0x20,0);
      }
      else {
        uStack_78 = uStack_a8;
        uStack_80 = uStack_b0;
        uStack_68 = uStack_98;
        uStack_70 = uStack_a0;
        uStack_58 = uStack_88;
        uStack_60 = uStack_90;
        System_Collections_Generic_List_DinoTrackingParameter___AddWithResize_3a149bc
                  (param_2,&uStack_80,
                   *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
      Dino_Common_TrackingParameterBufferExtensions__AddOptional_Int32Enum__28d9b4c
                (param_2,*(undefined8 *)puVar5,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)puVar4
                );
      Dino_Common_TrackingParameterBufferExtensions__AddOptional_Int32Enum__28d9b4c
                (param_2,*(undefined8 *)puVar7,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)puVar3
                );
      Dino_Common_TrackingParameterBufferExtensions__AddOptional_24479dc
                (param_2,*(undefined8 *)puVar8,*(undefined8 *)(param_1 + 0x30),0);
      Dino_Common_TrackingParameterBufferExtensions__AddOptional_24479dc
                (param_2,*(undefined8 *)puVar6,*(undefined8 *)(param_1 + 0x38),0);
      Dino_Common_TrackingParameterBufferExtensions__AddOptional_2447d7c
                (param_2,*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x40),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

