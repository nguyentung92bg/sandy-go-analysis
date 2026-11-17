/* IL2CPP: Dino.Tracking.TrackingEventResourceBase<object>$$WriteSharedParameters
void Dino_Tracking_TrackingEventResourceBase_object___WriteSharedParameters (Dino_Tracking_TrackingEventResourceBase_TSelf__o* __this, System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo_2F9B618* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventResourceBase<object>$$WriteSharedParameters
   void Dino_Tracking_TrackingEventResourceBase_object___WriteSharedParameters
   (Dino_Tracking_TrackingEventResourceBase_TSelf__o* __this,
   System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo_2F9B618*
   method); */

void Dino_Tracking_TrackingEventResourceBase_object___WriteSharedParameters_2f9b618
               (long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
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
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar3 = PTR_DAT_04cc6018;
  puVar2 = PTR_DAT_04cb24f8;
  if ((bRam0000000004f9e743 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc6018);
    FUN_02132f7c(PTR_DAT_04cbf440);
    FUN_02132f7c(PTR_DAT_04cb24e0);
    FUN_02132f7c(PTR_DAT_04cb4a20);
    FUN_02132f7c(PTR_DAT_04cb24e8);
    FUN_02132f7c(PTR_DAT_04cb24f8);
    FUN_02132f7c(PTR_DAT_04caa870);
    FUN_02132f7c(PTR_DAT_04cb2500);
    bRam0000000004f9e743 = 1;
  }
  uStack_88 = *(undefined8 *)puVar3;
  uStack_78 = *(undefined4 *)(param_1 + 0x18);
  uStack_80 = 0xffffffffffffffff;
  uVar5 = System_Enum__ToString_4863070(&uStack_88,0);
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  Dino_Common_DinoTrackingParameter___ctor_2447518(&uStack_c0,*(undefined8 *)puVar2,uVar5,0);
  puVar2 = PTR_DAT_04cbf440;
  if (param_2 != 0) {
    lVar6 = *(long *)(param_2 + 0x10);
    lVar7 = *(long *)PTR_DAT_04cbf440;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    puVar3 = PTR_DAT_04cb2500;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(param_2 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = lVar6 + (long)(int)uVar1 * 0x30;
        *(uint *)(param_2 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar6 + 0x38) = uStack_a8;
        *(undefined8 *)(lVar6 + 0x30) = uStack_b0;
        *(undefined8 *)(lVar6 + 0x48) = uStack_98;
        *(undefined8 *)(lVar6 + 0x40) = uStack_a0;
        *(undefined8 *)(lVar6 + 0x28) = uStack_b8;
        *(undefined8 *)(lVar6 + 0x20) = uStack_c0;
        thunk_FUN_02134474(lVar6 + 0x20,0);
      }
      else {
        uStack_68 = uStack_b8;
        uStack_70 = uStack_c0;
        uStack_58 = uStack_a8;
        uStack_60 = uStack_b0;
        uStack_48 = uStack_98;
        uStack_50 = uStack_a0;
        System_Collections_Generic_List_DinoTrackingParameter___AddWithResize_3a149bc
                  (param_2,&uStack_70,
                   *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      Dino_Common_DinoTrackingParameter___ctor_2447518
                (&uStack_f0,*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 0x20),0);
      lVar6 = *(long *)(param_2 + 0x10);
      lVar7 = *(long *)puVar2;
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
      puVar3 = PTR_DAT_04cb24e0;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(param_2 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          lVar6 = lVar6 + (long)(int)uVar1 * 0x30;
          *(uint *)(param_2 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + 0x38) = uStack_d8;
          *(undefined8 *)(lVar6 + 0x30) = uStack_e0;
          *(undefined8 *)(lVar6 + 0x48) = uStack_c8;
          *(undefined8 *)(lVar6 + 0x40) = uStack_d0;
          *(undefined8 *)(lVar6 + 0x28) = uStack_e8;
          *(undefined8 *)(lVar6 + 0x20) = uStack_f0;
          thunk_FUN_02134474(lVar6 + 0x20,0);
        }
        else {
          uStack_68 = uStack_e8;
          uStack_70 = uStack_f0;
          uStack_58 = uStack_d8;
          uStack_60 = uStack_e0;
          uStack_48 = uStack_c8;
          uStack_50 = uStack_d0;
          System_Collections_Generic_List_DinoTrackingParameter___AddWithResize_3a149bc
                    (param_2,&uStack_70,
                     *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        Dino_Common_DinoTrackingParameter___ctor_2447560
                  (&uStack_120,*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 0x28),0);
        lVar6 = *(long *)(param_2 + 0x10);
        lVar7 = *(long *)puVar2;
        *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
        puVar4 = PTR_DAT_04cb4a20;
        puVar3 = PTR_DAT_04cb24e8;
        puVar2 = PTR_DAT_04caa870;
        if (lVar6 != 0) {
          uVar1 = *(uint *)(param_2 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            lVar6 = lVar6 + (long)(int)uVar1 * 0x30;
            *(uint *)(param_2 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar6 + 0x38) = uStack_108;
            *(undefined8 *)(lVar6 + 0x30) = uStack_110;
            *(undefined8 *)(lVar6 + 0x48) = uStack_f8;
            *(undefined8 *)(lVar6 + 0x40) = uStack_100;
            *(undefined8 *)(lVar6 + 0x28) = uStack_118;
            *(undefined8 *)(lVar6 + 0x20) = uStack_120;
            thunk_FUN_02134474(lVar6 + 0x20,0);
          }
          else {
            uStack_68 = uStack_118;
            uStack_70 = uStack_120;
            uStack_58 = uStack_108;
            uStack_60 = uStack_110;
            uStack_48 = uStack_f8;
            uStack_50 = uStack_100;
            System_Collections_Generic_List_DinoTrackingParameter___AddWithResize_3a149bc
                      (param_2,&uStack_70,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          Dino_Common_TrackingParameterBufferExtensions__AddOptional_2447b10
                    (param_2,*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 0x30),
                     *(undefined8 *)(param_1 + 0x38),0);
          Dino_Common_TrackingParameterBufferExtensions__AddOptional_2447d7c
                    (param_2,*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x40),0);
          Dino_Common_TrackingParameterBufferExtensions__AddOptional_2447d7c
                    (param_2,*(undefined8 *)puVar4,*(undefined8 *)(param_1 + 0x48),0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

