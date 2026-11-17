/* IL2CPP: Dino.BusSand.Cheat.CheatUiHider$$RestoreGroups
void Dino_BusSand_Cheat_CheatUiHider__RestoreGroups (Dino_BusSand_Cheat_CheatUiHider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatUiHider$$RestoreGroups
   void Dino_BusSand_Cheat_CheatUiHider__RestoreGroups (Dino_BusSand_Cheat_CheatUiHider_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatUiHider__RestoreGroups_236e998(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000004f9c7bf & 1) == 0) {
                    /* try { // try from 0246e9c4 to 0256e9cb has its CatchHandler @ 0246ecec */
    FUN_02132f7c(PTR_DAT_04cbaa00);
    FUN_02132f7c(PTR_DAT_04cbaf50);
                    /* try { // try from 0246e9d4 to 0256e9db has its CatchHandler @ 0246ece0 */
    FUN_02132f7c(PTR_DAT_04cbaee8);
    FUN_02132f7c(PTR_DAT_04cbaef8);
                    /* try { // try from 0246e9ec to 0256e9f3 has its CatchHandler @ 0246ece4 */
    FUN_02132f7c(PTR_DAT_04cbaf08);
                    /* try { // try from 0246e9f8 to 0256e9ff has its CatchHandler @ 0246ece8 */
    FUN_02132f7c(PTR_DAT_04cbaf10);
    FUN_02132f7c(PTR_DAT_04cbaf30);
                    /* try { // try from 0246ea10 to 0256ea1b has its CatchHandler @ 0246ecd4 */
    bRam0000000004f9c7bf = 1;
  }
                    /* try { // try from 0246ea1c to 0256ea23 has its CatchHandler @ 0246ecd8 */
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
                    /* try { // try from 0246ea24 to 0256ea33 has its CatchHandler @ 0246ecdc */
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar6 = System_Collections_Generic_Dictionary_object__bool___get_Keys_34906d8
                        (*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_04cbaee8),
     puVar4 = PTR_DAT_04cbaf50, puVar3 = PTR_DAT_04cbaf08, puVar2 = PTR_DAT_04cbaef8,
     puVar1 = PTR_DAT_04cbaa00, lVar6 != 0)) {
                    /* try { // try from 0246ea50 to 0256ea5b has its CatchHandler @ 0246eccc */
    System_Collections_Generic_Dictionary_KeyCollection_object__bool___GetEnumerator_38f614c
              (&uStack_58,lVar6,*(undefined8 *)PTR_DAT_04cbaf30);
                    /* try { // try from 0246ea78 to 0256ea7f has its CatchHandler @ 0246ec04 */
    while (uVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__bool___MoveNext_36409c8
                             (&uStack_58,*(undefined8 *)puVar3), uVar5 = uStack_48, (uVar7 & 1) != 0
          ) {
                    /* try { // try from 0246ea8c to 0256ea93 has its CatchHandler @ 0246ebfc */
                    /* try { // try from 0246ea94 to 0256ea9f has its CatchHandler @ 0246ec00 */
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_Cheat_CheatUiHider__Show_236f308(uVar5);
    }
                    /* try { // try from 0246eab0 to 0256eab3 has its CatchHandler @ 0246ebe4 */
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__bool___Dispose_36409c4
              (&uStack_58,*(undefined8 *)puVar2);
    if (*(long *)(param_1 + 0x18) != 0) {
      System_Collections_Generic_Dictionary_object__bool___Clear_3490bb0
                (*(long *)(param_1 + 0x18),*(undefined8 *)puVar4);
                    /* try { // try from 0246eac8 to 0256ead3 has its CatchHandler @ 0246ebf4 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

