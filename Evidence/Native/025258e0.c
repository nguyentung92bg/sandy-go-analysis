/* IL2CPP: Dino.BusSand.Core.StageEngine$$ExpireExits
void Dino_BusSand_Core_StageEngine__ExpireExits (Dino_BusSand_Core_StageEngine_o* __this, System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02525b2c) */
/* IL2CPP: Dino.BusSand.Core.StageEngine$$ExpireExits
   void Dino_BusSand_Core_StageEngine__ExpireExits (Dino_BusSand_Core_StageEngine_o* __this,
   System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method); */

void Dino_BusSand_Core_StageEngine__ExpireExits_24258e0(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_108;
  ulong auStack_f8 [2];
  long *plStack_e8;
  long lStack_e0;
  undefined8 *puStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b0;
  undefined8 *puStack_a8;
  ulong uStack_a0;
  long lStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
                    /* try { // try from 02525900 to 02625903 has its CatchHandler @ 02525ac8 */
  if ((bRam0000000004f9cbaa & 1) == 0) {
                    /* try { // try from 0252591c to 0262591f has its CatchHandler @ 02525acc */
    FUN_02132f7c(PTR_DAT_04cb54b8);
    FUN_02132f7c(PTR_DAT_04cbede0);
    FUN_02132f7c(PTR_DAT_04cbede8);
                    /* try { // try from 02525938 to 0262594f has its CatchHandler @ 02525ad4 */
    FUN_02132f7c(PTR_DAT_04cad8c8);
    FUN_02132f7c(PTR_DAT_04cb54c0);
    FUN_02132f7c(PTR_DAT_04cad890);
                    /* try { // try from 0252595c to 02625963 has its CatchHandler @ 02525ac4 */
    FUN_02132f7c(PTR_DAT_04cb54c8);
                    /* try { // try from 02525970 to 02625973 has its CatchHandler @ 02525acc */
    FUN_02132f7c(PTR_DAT_04cb54d0);
                    /* try { // try from 02525974 to 02625997 has its CatchHandler @ 02525ae0 */
    FUN_02132f7c(PTR_DAT_04cad898);
    FUN_02132f7c(PTR_DAT_04cadd90);
    FUN_02132f7c(PTR_DAT_04cadd98);
    FUN_02132f7c(PTR_DAT_04cb58d0);
                    /* try { // try from 025259a8 to 026259b7 has its CatchHandler @ 02525ad8 */
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cad8a0);
                    /* try { // try from 025259bc to 026259df has its CatchHandler @ 02525af0 */
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    bRam0000000004f9cbaa = 1;
  }
                    /* try { // try from 025259e0 to 026259eb has its CatchHandler @ 02525af4 */
  uStack_70 = 0;
  lStack_b0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  lStack_90 = 0;
  if (*(long *)(param_1 + 0x90) == 0) {
LAB_02525c88:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* try { // try from 025259fc to 026259ff has its CatchHandler @ 02525ad0 */
                    /* try { // try from 02525a00 to 02625a1b has its CatchHandler @ 02525aec */
  iVar8 = System_Collections_Generic_Dictionary_int__long___get_Count_34338d8
                    (*(long *)(param_1 + 0x90),*(undefined8 *)PTR_DAT_04cbede8);
  puVar6 = PTR_DAT_04cb54c8;
  puVar5 = PTR_DAT_04cb54c0;
  puVar4 = PTR_DAT_04cad6e8;
  puVar3 = PTR_DAT_04caa1c8;
  puVar2 = PTR_DAT_04caa160;
  if (iVar8 != 0) {
    if (*(long *)(param_1 + 0x90) == 0) goto LAB_02525c88;
                    /* try { // try from 02525a1c to 02625ab7 has its CatchHandler @ 02525750 */
    System_Collections_Generic_Dictionary_int__long___GetEnumerator_3434024
              (&lStack_e0,*(long *)(param_1 + 0x90),*(undefined8 *)PTR_DAT_04cb54b8);
    lVar13 = 0;
    uStack_70 = uStack_c0;
    uStack_88 = puStack_d8;
    lStack_90 = lStack_e0;
    lStack_78 = lStack_c8;
    uStack_80 = uStack_d0;
    lStack_e0 = 0;
    puStack_d8 = &lStack_90;
    while (uVar9 = System_Collections_Generic_Dictionary_Enumerator_int__long___MoveNext_3630e64
                             (&lStack_90,*(undefined8 *)puVar6), uVar10 = uStack_80,
          lVar11 = lStack_e0, (uVar9 & 1) != 0) {
      if (lStack_78 <= *(long *)(param_1 + 0x78)) {
        uVar7 = (undefined4)uStack_80;
        if (lVar13 == 0) {
          lVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
          System_Collections_Generic_List_int____ctor_3a2b7dc(lVar13,*(undefined8 *)puVar4);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
        }
                    /* try { // try from 02525ab8 to 02625abb has its CatchHandler @ 02525ae4 */
        lVar11 = *(long *)(lVar13 + 0x10);
                    /* try { // try from 02525abc to 02625abf has its CatchHandler @ 02525adc */
        lVar12 = *(long *)puVar2;
                    /* try { // try from 02525ac0 to 02625b1f has its CatchHandler @ 02525750 */
                    /* catch() { ... } // from try @ 0252595c with catch @ 02525ac4 */
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                    /* catch() { ... } // from try @ 02525900 with catch @ 02525ac8 */
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
                    /* catch() { ... } // from try @ 0252591c with catch @ 02525acc
                       catch() { ... } // from try @ 02525970 with catch @ 02525acc */
        uVar1 = *(uint *)(lVar13 + 0x18);
                    /* catch() { ... } // from try @ 025259fc with catch @ 02525ad0 */
                    /* catch() { ... } // from try @ 02525938 with catch @ 02525ad4 */
                    /* catch() { ... } // from try @ 025259a8 with catch @ 02525ad8 */
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                    /* catch() { ... } // from try @ 02525abc with catch @ 02525adc */
                    /* catch() { ... } // from try @ 02525974 with catch @ 02525ae0 */
                    /* catch() { ... } // from try @ 02525ab8 with catch @ 02525ae4 */
          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                    /* catch() { ... } // from try @ 025258d4 with catch @ 02525ae8 */
          *(undefined4 *)(lVar11 + (long)(int)uVar1 * 4 + 0x20) = uVar7;
                    /* catch() { ... } // from try @ 02525a00 with catch @ 02525aec */
        }
        else {
                    /* catch() { ... } // from try @ 025259bc with catch @ 02525af0 */
                    /* catch() { ... } // from try @ 025259e0 with catch @ 02525af4 */
                    /* catch() { ... } // from try @ 025258d8 with catch @ 02525af8 */
                    /* catch() { ... } // from try @ 025258b0 with catch @ 02525afc */
          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                    (lVar13,uVar10 & 0xffffffff,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__long___Dispose_3630f7c
              (puStack_d8,*(undefined8 *)puVar5);
                    /* try { // try from 02525b20 to 02625b23 has its CatchHandler @ 02525b44 */
    if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213321c(lVar11);
    }
                    /* try { // try from 02525b24 to 02625b47 has its CatchHandler @ 02525750 */
    if (lVar13 != 0) {
                    /* catch() { ... } // from try @ 02525b20 with catch @ 02525b44 */
                    /* try { // try from 02525b48 to 02625b4f has its CatchHandler @ 02525b58 */
      System_Collections_Generic_List_int___GetEnumerator_3a2ca40
                (&lStack_e0,lVar13,*(undefined8 *)PTR_DAT_04cad8a0);
      puVar4 = PTR_DAT_04cbede0;
      puVar3 = PTR_DAT_04cb58d0;
      puVar2 = PTR_DAT_04cad890;
                    /* try { // try from 02525b50 to 02625b5b has its CatchHandler @ 02525750 */
                    /* catch() { ... } // from try @ 02525b48 with catch @ 02525b58 */
      plStack_e8 = &lStack_b0;
      puStack_a8 = puStack_d8;
      lStack_b0 = lStack_e0;
      uStack_a0 = uStack_d0;
      auStack_f8[1] = 0;
      while (uVar10 = System_Collections_Generic_List_Enumerator_int___MoveNext_35ce6bc
                                (&lStack_b0,*(undefined8 *)puVar2), (uVar10 & 1) != 0) {
        if (*(long *)(param_1 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar7 = (undefined4)uStack_a0;
        System_Collections_Generic_Dictionary_int__long___Remove_3435080
                  (*(long *)(param_1 + 0x90),uStack_a0 & 0xffffffff,*(undefined8 *)puVar4);
        auStack_f8[0] = 0;
        uStack_108 = CONCAT44(uVar7,3);
        thunk_FUN_02134474(auStack_f8,0);
        if (param_2 == 0) {
LAB_02525c80:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar13 = *(long *)(param_2 + 0x10);
        lVar11 = *(long *)puVar3;
        *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_02525c80;
        uVar1 = *(uint *)(param_2 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          lVar13 = lVar13 + (long)(int)uVar1 * 0x18;
          *(uint *)(param_2 + 0x18) = uVar1 + 1;
          *(ulong *)(lVar13 + 0x30) = auStack_f8[0];
          *(undefined8 *)(lVar13 + 0x28) = 0;
          *(long *)(lVar13 + 0x20) = uStack_108;
          thunk_FUN_02134474((ulong *)(lVar13 + 0x30),0);
        }
        else {
          puStack_d8 = (long *)0x0;
          lStack_e0 = uStack_108;
          uStack_d0 = auStack_f8[0];
          System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                    (param_2,&lStack_e0,
                     *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose_35ce6b8
                (&lStack_b0,*(undefined8 *)PTR_DAT_04cad8c8);
    }
  }
  return;
}

