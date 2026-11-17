/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$SnapshotCounts
void Dino_BusSand_App_Meta_GiftPackFeature__SnapshotCounts (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$SnapshotCounts
   void Dino_BusSand_App_Meta_GiftPackFeature__SnapshotCounts
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackFeature__SnapshotCounts_22363a0(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  if ((bRam0000000004f9beab & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3450);
    FUN_02132f7c(PTR_DAT_04cb2d98);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cabaf8);
                    /* try { // try from 023363f8 to 024363ff has its CatchHandler @ 023368b8 */
    FUN_02132f7c(PTR_DAT_04cb3458);
    bRam0000000004f9beab = 1;
  }
  puVar2 = PTR_DAT_04cabaf8;
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* try { // try from 02336410 to 0243642b has its CatchHandler @ 023368e0 */
    System_Collections_Generic_Dictionary_int__long___Clear_3433dc8
              (*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_04cb3450);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 0233643c to 02436443 has its CatchHandler @ 023368b4 */
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar6 = *(long *)puVar2;
                    /* try { // try from 0233645c to 0243647f has its CatchHandler @ 02336938 */
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar2;
    }
    if (*(long *)(*(long *)(lVar6 + 0xb8) + 0x10) == 0) {
      return;
    }
    lVar9 = *(long *)(param_1 + 0x30);
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 02336490 to 024364d7 has its CatchHandler @ 02336948 */
    uVar7 = Dino_BusSand_App_Meta_Profile__Count_225b150(0x3e9,0);
    puVar5 = PTR_DAT_04cb3458;
    puVar4 = PTR_DAT_04cb2d98;
    puVar3 = PTR_DAT_04caec70;
    if (lVar9 != 0) {
      System_Collections_Generic_Dictionary_int__long___set_Item_3433c2c
                (lVar9,0x3e9,uVar7,*(undefined8 *)PTR_DAT_04cb2d98);
      lVar6 = FUN_02133068(*(undefined8 *)puVar3,6);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
                (lVar6,*(undefined8 *)puVar5,0);
      if (lVar6 != 0) {
        if ((int)*(ulong *)(lVar6 + 0x18) < 1) {
          return;
        }
        uVar10 = 0;
        uVar8 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
        while( true ) {
          if (uVar8 <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          uVar1 = *(undefined4 *)(lVar6 + 0x20 + uVar10 * 4);
          lVar9 = *(long *)(param_1 + 0x30);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* try { // try from 02336518 to 0243653f has its CatchHandler @ 023368ec */
            thunk_FUN_0218fdac();
          }
          uVar7 = Dino_BusSand_App_Meta_Profile__Count_225b150(uVar1,0);
          if (lVar9 == 0) break;
          System_Collections_Generic_Dictionary_int__long___set_Item_3433c2c
                    (lVar9,uVar1,uVar7,*(undefined8 *)puVar4);
          uVar8 = (ulong)*(uint *)(lVar6 + 0x18);
          uVar10 = uVar10 + 1;
          if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar10) {
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

