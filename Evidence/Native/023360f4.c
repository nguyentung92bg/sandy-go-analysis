/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$ResetSessionState
void Dino_BusSand_App_Meta_GiftPackFeature__ResetSessionState (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$ResetSessionState
   void Dino_BusSand_App_Meta_GiftPackFeature__ResetSessionState
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackFeature__ResetSessionState_22360f4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar2 = PTR_DAT_04cb3390;
  puVar1 = PTR_DAT_04caec48;
                    /* try { // try from 02336110 to 02436117 has its CatchHandler @ 023368c8 */
  if ((bRam0000000004f9beaa & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacfd0);
                    /* try { // try from 02336138 to 02436157 has its CatchHandler @ 023369f8 */
    FUN_02132f7c(PTR_DAT_04caa468);
    FUN_02132f7c(PTR_DAT_04cb3398);
    FUN_02132f7c(PTR_DAT_04cb33a0);
    FUN_02132f7c(PTR_DAT_04cb33a8);
                    /* try { // try from 0233616c to 02436177 has its CatchHandler @ 023368c4 */
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04cb33c0);
    FUN_02132f7c(PTR_DAT_04caefe8);
                    /* try { // try from 0233618c to 02436193 has its CatchHandler @ 023368c0 */
    FUN_02132f7c(PTR_DAT_04cb3390);
    bRam0000000004f9beaa = 1;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  lStack_58 = 0;
  auStack_78._0_8_ = 0;
  auStack_78._8_8_ = 0;
                    /* try { // try from 023361b4 to 024361d3 has its CatchHandler @ 023369b8 */
  uStack_80 = 0;
  lVar6 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar2)
  ;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  lVar7 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
  if (lVar6 == 0) {
LAB_0233634c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(undefined8 *)(lVar6 + 0x50) = 0;
                    /* try { // try from 023361e8 to 024361f3 has its CatchHandler @ 023368bc */
  lVar7 = lVar7 / 1000;
  *(long *)(lVar6 + 0x40) = lVar7;
  *(long *)(lVar6 + 0x48) = lVar7;
  puVar5 = PTR_DAT_04cb33a0;
  puVar4 = PTR_DAT_04cb3398;
  puVar3 = PTR_DAT_04caefe8;
  puVar2 = PTR_DAT_04cacfd0;
  puVar1 = PTR_DAT_04caa468;
  if (*(long *)(lVar6 + 0x10) == 0) goto LAB_0233634c;
                    /* try { // try from 0233622c to 02436253 has its CatchHandler @ 023368dc */
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_68,*(long *)(lVar6 + 0x10),*(undefined8 *)PTR_DAT_04cb33c0);
  while (uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                           (&uStack_68,*(undefined8 *)puVar5), (uVar8 & 1) != 0) {
    if (lStack_58 != 0) {
      *(undefined4 *)(lStack_58 + 0x34) = 0;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_68,*(undefined8 *)puVar4);
  if (0 < *(long *)(lVar6 + 0x28)) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 02336294 to 024362bb has its CatchHandler @ 02336900 */
    auStack_78 = System_DateTimeOffset__FromUnixTimeSeconds_4815244(lVar7,0);
    uStack_80 = System_DateTimeOffset__get_UtcDateTime_4814760(auStack_78,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
                    /* try { // try from 023362cc to 024362d3 has its CatchHandler @ 023368ac */
    uVar9 = System_DateTime__get_Date_4810dd0(&uStack_80,0);
                    /* try { // try from 023362e4 to 02436307 has its CatchHandler @ 02336934 */
    auVar11 = System_DateTimeOffset__FromUnixTimeSeconds_4815244(*(undefined8 *)(lVar6 + 0x28),0);
    auStack_78 = auVar11;
    uStack_80 = System_DateTimeOffset__get_UtcDateTime_4814760(auStack_78,0);
    uVar10 = System_DateTime__get_Date_4810dd0(&uStack_80,0);
    uVar8 = System_DateTime__op_GreaterThan_4813144(uVar9,uVar10,0);
    if ((uVar8 & 1) == 0) goto LAB_02336324;
  }
                    /* try { // try from 0233631c to 02436327 has its CatchHandler @ 023368a8 */
  *(undefined4 *)(lVar6 + 0x24) = 0;
  *(long *)(lVar6 + 0x28) = lVar7;
LAB_02336324:
  Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(param_1,*(undefined8 *)puVar3);
  return;
}

