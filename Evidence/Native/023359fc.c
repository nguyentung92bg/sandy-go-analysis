/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$IsBreakIcePack
bool Dino_BusSand_App_Meta_GiftPackFeature__IsBreakIcePack (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, Dino_BusSand_App_Meta_GiftPackConfig_o* c, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$IsBreakIcePack
   bool Dino_BusSand_App_Meta_GiftPackFeature__IsBreakIcePack
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, Dino_BusSand_App_Meta_GiftPackConfig_o* c,
   const MethodInfo* method); */

uint Dino_BusSand_App_Meta_GiftPackFeature__IsBreakIcePack_22359fc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
                    /* try { // try from 023359fc to 02435a07 has its CatchHandler @ 02335a80 */
                    /* try { // try from 02335a08 to 02435a0b has its CatchHandler @ 02335a7c */
                    /* try { // try from 02335a0c to 02435a13 has its CatchHandler @ 02335a78 */
  if ((bRam0000000004f9bea5 & 1) == 0) {
                    /* try { // try from 02335a24 to 02435a3b has its CatchHandler @ 02335a74 */
    FUN_02132f7c(PTR_DAT_04cb3410);
    FUN_02132f7c(PTR_DAT_04cb3418);
    FUN_02132f7c(PTR_DAT_04cb3420);
                    /* try { // try from 02335a48 to 02435a4f has its CatchHandler @ 02335a64 */
    FUN_02132f7c(PTR_DAT_04caec48);
                    /* try { // try from 02335a54 to 02435a57 has its CatchHandler @ 02335a68 */
    FUN_02132f7c(PTR_DAT_04cb3428);
                    /* try { // try from 02335a5c to 02435a63 has its CatchHandler @ 02335acc */
    bRam0000000004f9bea5 = 1;
  }
                    /* catch() { ... } // from try @ 02335a48 with catch @ 02335a64
                       try { // try from 02335a64 to 02435aab has its CatchHandler @ 023358a8 */
  uStack_48 = 0;
  uStack_40 = 0;
                    /* catch() { ... } // from try @ 023359e0 with catch @ 02335a68
                       catch() { ... } // from try @ 02335a54 with catch @ 02335a68 */
  lStack_38 = 0;
                    /* catch() { ... } // from try @ 023359ec with catch @ 02335a6c */
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 023359e4 with catch @ 02335a70 */
                    /* catch() { ... } // from try @ 02335a24 with catch @ 02335a74 */
                    /* catch() { ... } // from try @ 02335a0c with catch @ 02335a78 */
    lVar4 = Dino_BusSand_App_Meta_GiftPackFeature__Themes_2235350(param_1,param_2);
    puVar2 = PTR_DAT_04cb3418;
    puVar1 = PTR_DAT_04caec48;
                    /* catch() { ... } // from try @ 02335a08 with catch @ 02335a7c */
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02335af0 with catch @ 02335b50
                       catch() { ... } // from try @ 02335b40 with catch @ 02335b50 */
      FUN_02133224();
    }
                    /* catch() { ... } // from try @ 023359fc with catch @ 02335a80 */
                    /* catch() { ... } // from try @ 023359c0 with catch @ 02335a84 */
                    /* catch() { ... } // from try @ 02335930 with catch @ 02335a88 */
                    /* catch() { ... } // from try @ 02335958 with catch @ 02335a8c */
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_48,lVar4,*(undefined8 *)PTR_DAT_04cb3428);
    do {
      do {
                    /* try { // try from 02335aac to 02435aaf has its CatchHandler @ 02335ab8 */
        uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                          (&uStack_48,*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 02335aac with catch @ 02335ab8 */
        if ((uVar5 & 1) == 0) {
                    /* try { // try from 02335b08 to 02435b3f has its CatchHandler @ 023358a8 */
          System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                    (&uStack_48,*(undefined8 *)PTR_DAT_04cb3410);
          uVar6 = *(undefined8 *)(param_2 + 0x98);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar3 = Dino_BusSand_App_Meta_GiftPackFeature__IsBreakIceIconPath_2235950(uVar6);
          goto LAB_02335b38;
        }
                    /* try { // try from 02335ac0 to 02435ac7 has its CatchHandler @ 02335b60 */
      } while (lStack_38 == 0);
                    /* try { // try from 02335ac8 to 02435aef has its CatchHandler @ 023358a8 */
      uVar6 = *(undefined8 *)(lStack_38 + 0x28);
                    /* catch() { ... } // from try @ 0233599c with catch @ 02335acc
                       catch() { ... } // from try @ 02335a5c with catch @ 02335acc */
                    /* catch() { ... } // from try @ 0233590c with catch @ 02335ad0 */
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 023358fc with catch @ 02335ad4 */
        thunk_FUN_0218fdac();
      }
      uVar5 = Dino_BusSand_App_Meta_GiftPackFeature__IsBreakIceIconPath_2235950(uVar6);
    } while ((uVar5 & 1) == 0);
                    /* try { // try from 02335af0 to 02435b07 has its CatchHandler @ 02335b50 */
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_48,*(undefined8 *)PTR_DAT_04cb3410);
    uVar3 = 1;
  }
LAB_02335b38:
                    /* try { // try from 02335b40 to 02435b4f has its CatchHandler @ 02335b50 */
  return uVar3 & 1;
}

