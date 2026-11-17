/* IL2CPP: Dino.Tracking.TrackingEventAdComplete$$WriteEventParameters
void Dino_Tracking_TrackingEventAdComplete__WriteEventParameters (Dino_Tracking_TrackingEventAdComplete_o* __this, System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventAdComplete$$WriteEventParameters
   void Dino_Tracking_TrackingEventAdComplete__WriteEventParameters
   (Dino_Tracking_TrackingEventAdComplete_o* __this,
   System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo* method); */

void Dino_Tracking_TrackingEventAdComplete__WriteEventParameters_2477b94(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
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
  
  puVar5 = PTR_DAT_04cc1920;
  puVar4 = PTR_DAT_04cc1918;
  puVar3 = PTR_DAT_04cb4b08;
  puVar2 = PTR_DAT_04cb4ac8;
  if ((bRam0000000004f9cee2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1918);
    FUN_02132f7c(PTR_DAT_04cc1920);
    FUN_02132f7c(PTR_DAT_04cb4ac8);
    FUN_02132f7c(PTR_DAT_04cb4b08);
    bRam0000000004f9cee2 = 1;
  }
  Dino_Tracking_TrackingEventAdBase_object___WriteSharedParameters_2f99844
            (param_1,param_2,*(undefined8 *)puVar4);
                    /* try { // try from 02577c20 to 02677e33 has its CatchHandler @ 02577c20
                       catch() { ... } // from try @ 02577c20 with catch @ 02577c20
                       catch() { ... } // from try @ 02577fb8 with catch @ 02577c20
                       catch() { ... } // from try @ 02578000 with catch @ 02577c20
                       catch() { ... } // from try @ 025781b0 with catch @ 02577c20
                       catch() { ... } // from try @ 0257820c with catch @ 02577c20 */
  Dino_Common_TrackingParameterBufferExtensions__AddOptional_Int32Enum__28d9b4c
            (param_2,*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)puVar5);
  uVar8 = *(ulong *)(param_1 + 0x48);
  uVar7 = *(undefined8 *)puVar2;
  if ((bRam0000000004f9cd2a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf440,uVar7,uVar8,0);
    FUN_02132f7c(PTR_DAT_04cb1d68);
    FUN_02132f7c(PTR_DAT_04cb2c60);
    bRam0000000004f9cd2a = 1;
  }
  if ((uVar8 & 0xff) == 0) {
    return;
  }
  iVar6 = System_Nullable_int___get_Value_2bcbbe8
                    (&stack0xffffffffffffffd8,*(undefined8 *)PTR_DAT_04cb2c60);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  Dino_Common_DinoTrackingParameter___ctor_2447560(&uStack_90,uVar7,(long)iVar6);
  if (param_2 != 0) {
    lVar9 = *(long *)(param_2 + 0x10);
    lVar10 = *(long *)PTR_DAT_04cbf440;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (lVar9 != 0) {
      uVar1 = *(uint *)(param_2 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        lVar9 = lVar9 + (long)(int)uVar1 * 0x30;
        *(uint *)(param_2 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar9 + 0x38) = uStack_78;
        *(undefined8 *)(lVar9 + 0x30) = uStack_80;
        *(undefined8 *)(lVar9 + 0x48) = uStack_68;
        *(undefined8 *)(lVar9 + 0x40) = uStack_70;
        *(undefined8 *)(lVar9 + 0x28) = uStack_88;
        *(undefined8 *)(lVar9 + 0x20) = uStack_90;
        thunk_FUN_02134474(lVar9 + 0x20,0);
        return;
      }
      uStack_58 = uStack_88;
      uStack_60 = uStack_90;
      uStack_48 = uStack_78;
      uStack_50 = uStack_80;
      System_Collections_Generic_List_DinoTrackingParameter___AddWithResize_3a149bc
                (param_2,&uStack_60,
                 *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

