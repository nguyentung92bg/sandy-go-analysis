/* IL2CPP: Dino.BusSand.App.Meta.GiftPackCycle$$GetCurrentPeriodKey
System_String_o* Dino_BusSand_App_Meta_GiftPackCycle__GetCurrentPeriodKey (Dino_BusSand_App_Meta_GiftPackConfig_o* c, int64_t unix, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackCycle$$GetCurrentPeriodKey
   System_String_o* Dino_BusSand_App_Meta_GiftPackCycle__GetCurrentPeriodKey
   (Dino_BusSand_App_Meta_GiftPackConfig_o* c, int64_t unix, const MethodInfo* method); */

undefined8
Dino_BusSand_App_Meta_GiftPackCycle__GetCurrentPeriodKey_22322cc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uStack_4c;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
                    /* try { // try from 023322e4 to 024322fb has its CatchHandler @ 023323b8 */
  if ((bRam0000000004f9be80 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa370);
    FUN_02132f7c(PTR_DAT_04cacfd0);
                    /* try { // try from 02332304 to 02432307 has its CatchHandler @ 023323b4 */
    FUN_02132f7c(PTR_DAT_04caa468);
                    /* try { // try from 02332314 to 0243231b has its CatchHandler @ 023323b0 */
    FUN_02132f7c(PTR_DAT_04cb3240);
                    /* try { // try from 0233231c to 0243237b has its CatchHandler @ 023323c8 */
    FUN_02132f7c(PTR_DAT_04cb3248);
    FUN_02132f7c(PTR_DAT_04cb3250);
    FUN_02132f7c(PTR_DAT_04cb3258);
    FUN_02132f7c(PTR_DAT_04cb3260);
    bRam0000000004f9be80 = 1;
  }
  uStack_30 = 0;
  uStack_28 = 0;
  auStack_48._8_8_ = 0;
  uStack_38 = 0;
  auStack_48._0_8_ = 0;
  uStack_4c = 0;
  uVar1 = Dino_BusSand_App_Meta_GiftPackCycle__TryGetCycleRange_2232180
                    (param_1,param_2,&uStack_28,&uStack_38);
  uVar2 = uStack_28;
  if ((uVar1 & 1) == 0) {
                    /* try { // try from 02332420 to 0243247f has its CatchHandler @ 023324cc */
    uVar2 = **(undefined8 **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
  }
  else {
                    /* try { // try from 0233237c to 02432393 has its CatchHandler @ 02331ecc */
    if (*(int *)(*(long *)PTR_DAT_04cacfd0 + 0xe4) == 0) {
                    /* try { // try from 02332394 to 024323a3 has its CatchHandler @ 023323b8 */
      thunk_FUN_0218fdac();
    }
    auStack_48 = System_DateTimeOffset__FromUnixTimeSeconds_4815244(uVar2,0);
                    /* try { // try from 023323a8 to 024323ab has its CatchHandler @ 023323ac */
                    /* catch() { ... } // from try @ 023323a8 with catch @ 023323ac */
                    /* catch() { ... } // from try @ 02332314 with catch @ 023323b0 */
    uStack_30 = System_DateTimeOffset__get_UtcDateTime_4814760(auStack_48,0);
                    /* catch() { ... } // from try @ 02332304 with catch @ 023323b4 */
                    /* catch() { ... } // from try @ 023322e4 with catch @ 023323b8
                       catch() { ... } // from try @ 02332394 with catch @ 023323b8 */
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* try { // try from 023323c0 to 024323c3 has its CatchHandler @ 02332660 */
                    /* try { // try from 023323c4 to 024323e7 has its CatchHandler @ 02331ecc */
    if (*(int *)(param_1 + 0x44) == 4) {
      if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar2 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
      puVar4 = (undefined8 *)PTR_DAT_04cb3250;
      if (*(int *)(*(long *)PTR_DAT_04caa468 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caa468);
        puVar4 = (undefined8 *)PTR_DAT_04cb3250;
      }
    }
    else {
                    /* catch() { ... } // from try @ 0233231c with catch @ 023323c8 */
                    /* catch() { ... } // from try @ 02331fbc with catch @ 023323cc */
      if (*(int *)(param_1 + 0x44) != 3) {
                    /* try { // try from 02332498 to 024324a7 has its CatchHandler @ 023324bc */
        if (*(int *)(*(long *)PTR_DAT_04caa468 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 023324ac to 024324af has its CatchHandler @ 023324b0 */
                    /* catch() { ... } // from try @ 023324ac with catch @ 023324b0 */
                    /* catch() { ... } // from try @ 02332418 with catch @ 023324b4 */
        uStack_4c = System_DateTime__get_Year_481174c(&uStack_30,0);
                    /* catch() { ... } // from try @ 02332408 with catch @ 023324b8 */
                    /* catch() { ... } // from try @ 023323e8 with catch @ 023324bc
                       catch() { ... } // from try @ 02332498 with catch @ 023324bc */
                    /* try { // try from 023324c4 to 024324c7 has its CatchHandler @ 02332660 */
                    /* try { // try from 023324c8 to 024324ff has its CatchHandler @ 02331ecc */
                    /* catch() { ... } // from try @ 02332420 with catch @ 023324cc */
                    /* catch() { ... } // from try @ 023321e4 with catch @ 023324d0 */
        uVar2 = System_Int32__ToString_482d7e4(&uStack_4c,*(undefined8 *)PTR_DAT_04cb3260,0);
                    /* catch() { ... } // from try @ 023321d8 with catch @ 023324d4 */
                    /* catch() { ... } // from try @ 023320bc with catch @ 023324d8 */
                    /* catch() { ... } // from try @ 02331fa0 with catch @ 023324dc */
                    /* catch() { ... } // from try @ 02331f90 with catch @ 023324e0 */
        uStack_4c = Dino_BusSand_App_Meta_GiftPackCycle__GetIsoWeek_2232530(uStack_30);
                    /* catch() { ... } // from try @ 02331f74 with catch @ 023324e4 */
        uVar3 = System_Int32__ToString_482d7e4(&uStack_4c,*(undefined8 *)PTR_DAT_04cb3240,0);
                    /* try { // try from 02332500 to 02432517 has its CatchHandler @ 02332650 */
                    /* try { // try from 02332518 to 0243263f has its CatchHandler @ 02331ecc */
        uVar2 = System_String__Concat_46d2b84(uVar2,*(undefined8 *)PTR_DAT_04cb3248,uVar3,0);
        return uVar2;
      }
      if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 023323e8 to 024323ff has its CatchHandler @ 023324bc */
      uVar2 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
      puVar4 = (undefined8 *)PTR_DAT_04cb3258;
      if (*(int *)(*(long *)PTR_DAT_04caa468 + 0xe4) == 0) {
                    /* try { // try from 02332408 to 0243240b has its CatchHandler @ 023324b8 */
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caa468);
        puVar4 = (undefined8 *)PTR_DAT_04cb3258;
      }
    }
                    /* try { // try from 02332480 to 02432497 has its CatchHandler @ 02331ecc */
    uVar2 = System_DateTime__ToString_4812608(&uStack_30,*puVar4,uVar2,0);
  }
  return uVar2;
}

