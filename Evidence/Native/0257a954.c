/* IL2CPP: Dino.Tracking.TrackingEventResourceEarn$$WriteEventParameters
void Dino_Tracking_TrackingEventResourceEarn__WriteEventParameters (Dino_Tracking_TrackingEventResourceEarn_o* __this, System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventResourceEarn$$WriteEventParameters
   void Dino_Tracking_TrackingEventResourceEarn__WriteEventParameters
   (Dino_Tracking_TrackingEventResourceEarn_o* __this,
   System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo* method); */

void Dino_Tracking_TrackingEventResourceEarn__WriteEventParameters_247a954
               (long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long alStack_78 [2];
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar4 = PTR_DAT_04cc1b60;
  puVar3 = PTR_DAT_04cc1b58;
                    /* catch() { ... } // from try @ 0257a7d8 with catch @ 0257a954
                       catch() { ... } // from try @ 0257a8e8 with catch @ 0257a954 */
  puVar2 = PTR_DAT_04cad0e0;
                    /* try { // try from 0257a974 to 0267a977 has its CatchHandler @ 0257aa14 */
  if ((bRam0000000004f9cf29 & 1) == 0) {
                    /* try { // try from 0257a994 to 0267a997 has its CatchHandler @ 0257aa44 */
    FUN_02132f7c(PTR_DAT_04cc1b58);
    FUN_02132f7c(PTR_DAT_04cc1b60);
    FUN_02132f7c(PTR_DAT_04cad0e0);
    bRam0000000004f9cf29 = 1;
  }
                    /* try { // try from 0257a9bc to 0267a9bf has its CatchHandler @ 0257aa40 */
  Dino_Tracking_TrackingEventResourceBase_object___WriteSharedParameters_2f9b618
            (param_1,param_2,*(undefined8 *)puVar3);
  uVar7 = *(ulong *)(param_1 + 0x50);
  uVar6 = *(undefined8 *)puVar2;
                    /* try { // try from 0257a9d4 to 0267a9d7 has its CatchHandler @ 0257aa30 */
  lVar8 = *(long *)puVar4;
                    /* try { // try from 0257a9e4 to 0267a9e7 has its CatchHandler @ 0257aa90 */
                    /* try { // try from 0257a9e8 to 0267a9eb has its CatchHandler @ 0257aa88 */
                    /* try { // try from 0257a9ec to 0267a9ef has its CatchHandler @ 0257aa84 */
  if ((*(long *)(lVar8 + 0x38) == 0) &&
     (FUN_02132f7c(PTR_DAT_04cbf440), *(long *)(lVar8 + 0x38) == 0)) {
    FUN_0216b4cc(lVar8);
  }
  if ((uVar7 & 0xff) == 0) {
    return;
  }
  uStack_68 = System_Nullable_Int32Enum___get_Value_2bcbf74
                        (&stack0xffffffffffffffd8,*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x18));
  alStack_78[0] = *(long *)(*(long *)(lVar8 + 0x38) + 0x20);
  if ((*(ushort *)(alStack_78[0] + 0x135) & 1) == 0) {
    alStack_78[0] = FUN_0216b470(alStack_78[0]);
  }
  alStack_78[1] = 0xffffffffffffffff;
  uVar5 = System_Enum__ToString_4863070(alStack_78,0);
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  Dino_Common_DinoTrackingParameter___ctor_2447518(&uStack_b0,uVar6,uVar5,0);
  if (param_2 != 0) {
    lVar8 = *(long *)(param_2 + 0x10);
    lVar9 = *(long *)PTR_DAT_04cbf440;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(param_2 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        lVar8 = lVar8 + (long)(int)uVar1 * 0x30;
        *(uint *)(param_2 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar8 + 0x38) = uStack_98;
        *(undefined8 *)(lVar8 + 0x30) = uStack_a0;
        *(undefined8 *)(lVar8 + 0x48) = uStack_88;
        *(undefined8 *)(lVar8 + 0x40) = uStack_90;
        *(undefined8 *)(lVar8 + 0x28) = uStack_a8;
        *(undefined8 *)(lVar8 + 0x20) = uStack_b0;
        thunk_FUN_02134474(lVar8 + 0x20,0);
        return;
      }
      uStack_58 = uStack_a8;
      uStack_60 = uStack_b0;
      uStack_48 = uStack_98;
      uStack_50 = uStack_a0;
      System_Collections_Generic_List_DinoTrackingParameter___AddWithResize_3a149bc
                (param_2,&uStack_60,
                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

