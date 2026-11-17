/* IL2CPP: Dino.Tracking.TrackingEventScreenShow$$WriteEventParameters
void Dino_Tracking_TrackingEventScreenShow__WriteEventParameters (Dino_Tracking_TrackingEventScreenShow_o* __this, System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventScreenShow$$WriteEventParameters
   void Dino_Tracking_TrackingEventScreenShow__WriteEventParameters
   (Dino_Tracking_TrackingEventScreenShow_o* __this,
   System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo* method); */

void Dino_Tracking_TrackingEventScreenShow__WriteEventParameters_247a498(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
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
  
  puVar2 = PTR_DAT_04cb2790;
  if ((bRam0000000004f9cf25 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf440);
    FUN_02132f7c(PTR_DAT_04cc1b48);
    FUN_02132f7c(PTR_DAT_04cc1b40);
    FUN_02132f7c(PTR_DAT_04cc1b30);
    FUN_02132f7c(PTR_DAT_04cb2790);
    bRam0000000004f9cf25 = 1;
  }
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  Dino_Common_DinoTrackingParameter___ctor_2447518
            (&uStack_90,*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x18),0);
  if (param_2 != 0) {
    lVar5 = *(long *)(param_2 + 0x10);
    lVar6 = *(long *)PTR_DAT_04cbf440;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    puVar4 = PTR_DAT_04cc1b48;
    puVar3 = PTR_DAT_04cc1b40;
    puVar2 = PTR_DAT_04cc1b30;
    if (lVar5 != 0) {
      uVar1 = *(uint *)(param_2 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        lVar5 = lVar5 + (long)(int)uVar1 * 0x30;
        *(uint *)(param_2 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar5 + 0x38) = uStack_78;
        *(undefined8 *)(lVar5 + 0x30) = uStack_80;
        *(undefined8 *)(lVar5 + 0x48) = uStack_68;
        *(undefined8 *)(lVar5 + 0x40) = uStack_70;
        *(undefined8 *)(lVar5 + 0x28) = uStack_88;
        *(undefined8 *)(lVar5 + 0x20) = uStack_90;
        thunk_FUN_02134474(lVar5 + 0x20,0);
      }
      else {
                    /* try { // try from 0257a5b8 to 0267a5cb has its CatchHandler @ 0257aa5c */
        uStack_58 = uStack_88;
        uStack_60 = uStack_90;
        uStack_48 = uStack_78;
        uStack_50 = uStack_80;
        uStack_38 = uStack_68;
        uStack_40 = uStack_70;
        System_Collections_Generic_List_DinoTrackingParameter___AddWithResize_3a149bc
                  (param_2,&uStack_60,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      Dino_Common_TrackingParameterBufferExtensions__AddOptional_2447d7c
                (param_2,*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x20),0);
                    /* try { // try from 0257a5e4 to 0267a5ff has its CatchHandler @ 0257aa50 */
      Dino_Common_TrackingParameterBufferExtensions__AddOptional_2447d7c
                (param_2,*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 0x28),0);
      Dino_Common_TrackingParameterBufferExtensions__AddOptional_24479dc
                (param_2,*(undefined8 *)puVar4,*(undefined8 *)(param_1 + 0x30),0);
                    /* try { // try from 0257a610 to 0267a613 has its CatchHandler @ 0257aa2c */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

