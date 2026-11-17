/* IL2CPP: Dino.Tracking.TrackingEventButtonClick$$WriteEventParameters
void Dino_Tracking_TrackingEventButtonClick__WriteEventParameters (Dino_Tracking_TrackingEventButtonClick_o* __this, System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventButtonClick$$WriteEventParameters
   void Dino_Tracking_TrackingEventButtonClick__WriteEventParameters
   (Dino_Tracking_TrackingEventButtonClick_o* __this,
   System_Collections_Generic_List_DinoTrackingParameter__o* buffer, const MethodInfo* method); */

void Dino_Tracking_TrackingEventButtonClick__WriteEventParameters_247a158(long param_1,long param_2)

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
  
  puVar3 = PTR_DAT_04cc1b30;
                    /* try { // try from 0257a168 to 0267a16b has its CatchHandler @ 0257a278 */
                    /* try { // try from 0257a16c to 0267a16f has its CatchHandler @ 0257a268 */
                    /* try { // try from 0257a170 to 0267a173 has its CatchHandler @ 0257a264 */
                    /* try { // try from 0257a174 to 0267a177 has its CatchHandler @ 0257a260 */
                    /* try { // try from 0257a178 to 0267a17b has its CatchHandler @ 0257a204 */
                    /* try { // try from 0257a17c to 0267a17f has its CatchHandler @ 0257a1fc */
                    /* try { // try from 0257a180 to 0267a187 has its CatchHandler @ 0257a26c */
  if ((bRam0000000004f9cf21 & 1) == 0) {
                    /* try { // try from 0257a188 to 0267a18b has its CatchHandler @ 0257a1f4 */
                    /* try { // try from 0257a18c to 0267a193 has its CatchHandler @ 025799d0 */
    FUN_02132f7c(PTR_DAT_04cbf440);
                    /* try { // try from 0257a194 to 0267a1db has its CatchHandler @ 0257a1ec */
    FUN_02132f7c(PTR_DAT_04cc1b30);
    FUN_02132f7c(PTR_DAT_04cb2790);
    bRam0000000004f9cf21 = 1;
  }
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  Dino_Common_DinoTrackingParameter___ctor_2447518
            (&uStack_90,*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 0x18),0);
  puVar3 = PTR_DAT_04cbf440;
  if (param_2 != 0) {
                    /* try { // try from 0257a1dc to 0267a1df has its CatchHandler @ 0257a1e8 */
                    /* catch() { ... } // from try @ 02579ca0 with catch @ 0257a1e0
                       try { // try from 0257a1e0 to 0267a237 has its CatchHandler @ 025799d0 */
    lVar4 = *(long *)(param_2 + 0x10);
                    /* catch() { ... } // from try @ 02579f60 with catch @ 0257a1e4 */
    lVar5 = *(long *)PTR_DAT_04cbf440;
                    /* catch() { ... } // from try @ 0257a1dc with catch @ 0257a1e8 */
                    /* catch() { ... } // from try @ 0257a194 with catch @ 0257a1ec */
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    puVar2 = PTR_DAT_04cb2790;
                    /* catch() { ... } // from try @ 02579f44 with catch @ 0257a1f0 */
    if (lVar4 != 0) {
                    /* catch() { ... } // from try @ 0257a188 with catch @ 0257a1f4 */
      uVar1 = *(uint *)(param_2 + 0x18);
                    /* catch() { ... } // from try @ 02579f18 with catch @ 0257a1f8 */
                    /* catch() { ... } // from try @ 0257a17c with catch @ 0257a1fc */
                    /* catch() { ... } // from try @ 02579d24 with catch @ 0257a200 */
                    /* catch() { ... } // from try @ 0257a178 with catch @ 0257a204 */
                    /* catch() { ... } // from try @ 0257a120 with catch @ 0257a208 */
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                    /* catch() { ... } // from try @ 0257a11c with catch @ 0257a20c */
                    /* catch() { ... } // from try @ 02579b1c with catch @ 0257a210 */
                    /* catch() { ... } // from try @ 0257a110 with catch @ 0257a214 */
                    /* catch() { ... } // from try @ 02579d74 with catch @ 0257a218 */
        lVar4 = lVar4 + (long)(int)uVar1 * 0x30;
        *(uint *)(param_2 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar4 + 0x38) = uStack_78;
        *(undefined8 *)(lVar4 + 0x30) = uStack_80;
        *(undefined8 *)(lVar4 + 0x48) = uStack_68;
        *(undefined8 *)(lVar4 + 0x40) = uStack_70;
        *(undefined8 *)(lVar4 + 0x28) = uStack_88;
        *(undefined8 *)(lVar4 + 0x20) = uStack_90;
                    /* try { // try from 0257a238 to 0267a23b has its CatchHandler @ 0257a24c */
        thunk_FUN_02134474(lVar4 + 0x20,0);
      }
      else {
                    /* catch() { ... } // from try @ 0257a238 with catch @ 0257a24c */
                    /* try { // try from 0257a254 to 0267a25b has its CatchHandler @ 0257a358 */
                    /* try { // try from 0257a25c to 0267a29b has its CatchHandler @ 025799d0 */
        uStack_58 = uStack_88;
        uStack_60 = uStack_90;
        uStack_48 = uStack_78;
        uStack_50 = uStack_80;
                    /* catch() { ... } // from try @ 02579d08 with catch @ 0257a260
                       catch() { ... } // from try @ 0257a174 with catch @ 0257a260 */
        uStack_38 = uStack_68;
        uStack_40 = uStack_70;
                    /* catch() { ... } // from try @ 02579cec with catch @ 0257a264
                       catch() { ... } // from try @ 0257a170 with catch @ 0257a264 */
        System_Collections_Generic_List_DinoTrackingParameter___AddWithResize_3a149bc
                  (param_2,&uStack_60,
                   *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
                    /* catch() { ... } // from try @ 02579cd0 with catch @ 0257a268
                       catch() { ... } // from try @ 0257a16c with catch @ 0257a268 */
                    /* catch() { ... } // from try @ 02579df4 with catch @ 0257a26c
                       catch() { ... } // from try @ 0257a180 with catch @ 0257a26c */
                    /* catch() { ... } // from try @ 02579ca4 with catch @ 0257a278
                       catch() { ... } // from try @ 0257a168 with catch @ 0257a278 */
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      Dino_Common_DinoTrackingParameter___ctor_2447518
                (&uStack_c0,*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x20),0);
      lVar4 = *(long *)(param_2 + 0x10);
      lVar5 = *(long *)puVar3;
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
                    /* try { // try from 0257a29c to 0267a29f has its CatchHandler @ 0257a2a8 */
      if (lVar4 != 0) {
        uVar1 = *(uint *)(param_2 + 0x18);
                    /* catch() { ... } // from try @ 0257a29c with catch @ 0257a2a8 */
                    /* try { // try from 0257a2ac to 0267a2b3 has its CatchHandler @ 0257a358 */
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                    /* try { // try from 0257a2b4 to 0267a2f7 has its CatchHandler @ 025799d0 */
                    /* catch() { ... } // from try @ 0257a0c0 with catch @ 0257a2b8 */
                    /* catch() { ... } // from try @ 0257a0bc with catch @ 0257a2bc */
          lVar4 = lVar4 + (long)(int)uVar1 * 0x30;
                    /* catch() { ... } // from try @ 0257a0b8 with catch @ 0257a2c0 */
                    /* catch() { ... } // from try @ 0257a0b4 with catch @ 0257a2c4 */
                    /* catch() { ... } // from try @ 02579f78 with catch @ 0257a2c8 */
                    /* catch() { ... } // from try @ 02579f94 with catch @ 0257a2cc */
          *(uint *)(param_2 + 0x18) = uVar1 + 1;
                    /* catch() { ... } // from try @ 02579fa8 with catch @ 0257a2d0 */
                    /* catch() { ... } // from try @ 02579fc8 with catch @ 0257a2d4 */
          *(undefined8 *)(lVar4 + 0x38) = uStack_a8;
          *(undefined8 *)(lVar4 + 0x30) = uStack_b0;
          *(undefined8 *)(lVar4 + 0x48) = uStack_98;
          *(undefined8 *)(lVar4 + 0x40) = uStack_a0;
                    /* catch() { ... } // from try @ 02579fe4 with catch @ 0257a2d8 */
          *(undefined8 *)(lVar4 + 0x28) = uStack_b8;
          *(undefined8 *)(lVar4 + 0x20) = uStack_c0;
                    /* catch() { ... } // from try @ 02579ffc with catch @ 0257a2dc */
          thunk_FUN_02134474(lVar4 + 0x20,0);
        }
        else {
                    /* try { // try from 0257a2f8 to 0267a2fb has its CatchHandler @ 0257a304 */
          uStack_58 = uStack_b8;
          uStack_60 = uStack_c0;
          uStack_48 = uStack_a8;
          uStack_50 = uStack_b0;
                    /* catch() { ... } // from try @ 0257a2f8 with catch @ 0257a304 */
          uStack_38 = uStack_98;
          uStack_40 = uStack_a0;
                    /* try { // try from 0257a308 to 0267a30f has its CatchHandler @ 0257a358 */
          System_Collections_Generic_List_DinoTrackingParameter___AddWithResize_3a149bc
                    (param_2,&uStack_60,
                     *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
                    /* try { // try from 0257a310 to 0267a333 has its CatchHandler @ 025799d0 */
                    /* catch() { ... } // from try @ 0257a0b0 with catch @ 0257a314 */
                    /* catch() { ... } // from try @ 0257a0ac with catch @ 0257a318 */
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

