/* IL2CPP: Dino.Tracking.TrackingEventAdImpression$$WriteEventParameters
void Dino_Tracking_TrackingEventAdImpression__WriteEventParameters (Dino_Tracking_TrackingEventAdImpression_o* __this, System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventAdImpression$$WriteEventParameters
   void Dino_Tracking_TrackingEventAdImpression__WriteEventParameters
   (Dino_Tracking_TrackingEventAdImpression_o* __this,
   System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo* method); */

void Dino_Tracking_TrackingEventAdImpression__WriteEventParameters_2477d08
               (long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
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
  
  puVar3 = PTR_DAT_04cc1930;
  puVar2 = PTR_DAT_04caa800;
  if ((bRam0000000004f9cee5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf440);
    FUN_02132f7c(PTR_DAT_04ca9e68);
    FUN_02132f7c(PTR_DAT_04caa3c0);
    FUN_02132f7c(PTR_DAT_04cc1930);
    FUN_02132f7c(PTR_DAT_04cc1938);
    FUN_02132f7c(PTR_DAT_04cb4a18);
    FUN_02132f7c(PTR_DAT_04caa800);
    FUN_02132f7c(PTR_DAT_04cb26d0);
    FUN_02132f7c(PTR_DAT_04cb4b40);
    bRam0000000004f9cee5 = 1;
  }
  Dino_Tracking_TrackingEventAdBase_object___WriteSharedParameters_2f99844
            (param_1,param_2,*(undefined8 *)puVar3);
  Dino_Common_TrackingParameterBufferExtensions__AddOptional_2447c48
            (param_2,*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x48),0);
  puVar2 = PTR_DAT_04cb4a18;
  if (*(char *)(param_1 + 0x50) != '\0') {
    uVar4 = System_Nullable_bool___get_Value_2bc8084
                      ((char *)(param_1 + 0x50),*(undefined8 *)PTR_DAT_04caa3c0);
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    Dino_Common_DinoTrackingParameter___ctor_2447560(&uStack_90,*(undefined8 *)puVar2,uVar4 & 1,0);
    if (param_2 != 0) {
      lVar5 = *(long *)(param_2 + 0x10);
      lVar6 = *(long *)PTR_DAT_04cbf440;
                    /* try { // try from 02577e34 to 02677e3b has its CatchHandler @ 025781d4 */
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(param_2 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                    /* try { // try from 02577e58 to 02677e5f has its CatchHandler @ 025781d0 */
          lVar5 = lVar5 + (long)(int)uVar1 * 0x30;
          *(uint *)(param_2 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar5 + 0x38) = uStack_78;
          *(undefined8 *)(lVar5 + 0x30) = uStack_80;
          *(undefined8 *)(lVar5 + 0x48) = uStack_68;
          *(undefined8 *)(lVar5 + 0x40) = uStack_70;
                    /* try { // try from 02577e78 to 02677e7f has its CatchHandler @ 025781c4 */
          *(undefined8 *)(lVar5 + 0x28) = uStack_88;
          *(undefined8 *)(lVar5 + 0x20) = uStack_90;
          thunk_FUN_02134474(lVar5 + 0x20,0);
        }
        else {
                    /* try { // try from 02577e9c to 02677ea3 has its CatchHandler @ 02577fe0 */
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
        goto LAB_02577eac;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_02577eac:
  puVar2 = PTR_DAT_04cb26d0;
                    /* try { // try from 02577eb4 to 02677ebb has its CatchHandler @ 02577fdc */
                    /* try { // try from 02577ecc to 02677ed3 has its CatchHandler @ 02577fd4 */
  Dino_Common_TrackingParameterBufferExtensions__AddOptional_Int32Enum__28d9b4c
            (param_2,*(undefined8 *)PTR_DAT_04cb4b40,*(undefined8 *)(param_1 + 0x54),
             *(undefined8 *)PTR_DAT_04cc1938);
                    /* try { // try from 02577ee4 to 02677eeb has its CatchHandler @ 02577fc0 */
  Dino_Common_TrackingParameterBufferExtensions__AddOptional_2447d7c
            (param_2,*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x60),0);
                    /* try { // try from 02577efc to 02677f03 has its CatchHandler @ 02577fcc */
  return;
}

