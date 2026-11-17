/* IL2CPP: Dino.BusSand.App.UI.ActivityQuitFlow$$HideAll
void Dino_BusSand_App_UI_ActivityQuitFlow__HideAll (Dino_BusSand_App_UI_ActivityQuitFlow_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ActivityQuitFlow$$HideAll
   void Dino_BusSand_App_UI_ActivityQuitFlow__HideAll (Dino_BusSand_App_UI_ActivityQuitFlow_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_ActivityQuitFlow__HideAll_2188b58(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000004f9b96d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadb00);
    FUN_02132f7c(PTR_DAT_04cadb08);
    FUN_02132f7c(PTR_DAT_04cadb10);
    FUN_02132f7c(PTR_DAT_04cadb18);
    FUN_02132f7c(PTR_DAT_04cadb20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cadb28);
    FUN_02132f7c(PTR_DAT_04cadac8);
    FUN_02132f7c(PTR_DAT_04cadad0);
    FUN_02132f7c(PTR_DAT_04cadae8);
    FUN_02132f7c(PTR_DAT_04cadab8);
    FUN_02132f7c(PTR_DAT_04cadaf0);
    bRam0000000004f9b96d = 1;
  }
  puVar10 = PTR_DAT_04cadb28;
  puVar9 = PTR_DAT_04cadb08;
  puVar8 = PTR_DAT_04cadb00;
  puVar7 = PTR_DAT_04cadaf0;
  puVar6 = PTR_DAT_04cadae8;
  puVar5 = PTR_DAT_04cadad0;
  puVar4 = PTR_DAT_04cadac8;
  puVar3 = PTR_DAT_04caa038;
  puVar2 = PTR_DAT_04ca9ae8;
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
                    /* try { // try from 02288c44 to 02388c77 has its CatchHandler @ 02288c44
                       catch() { ... } // from try @ 02288c44 with catch @ 02288c44
                       catch() { ... } // from try @ 02288c88 with catch @ 02288c44 */
                    /* try { // try from 02288c78 to 02388c87 has its CatchHandler @ 02288c98 */
                    /* try { // try from 02288c88 to 02388cab has its CatchHandler @ 02288c44 */
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_98,*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_04cadb20);
                    /* catch() { ... } // from try @ 02288c78 with catch @ 02288c98 */
    uStack_70 = uStack_88;
    puStack_78 = puStack_90;
    uStack_80 = uStack_98;
    uStack_98 = 0;
    puStack_90 = &uStack_80;
    while (uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                              (&uStack_80,*(undefined8 *)puVar9), uVar11 = uStack_70,
          (uVar12 & 1) != 0) {
                    /* try { // try from 02288cc0 to 02388cc3 has its CatchHandler @ 02288ccc */
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02288cc0 with catch @ 02288ccc
                        */
        thunk_FUN_0218fdac();
      }
                    /* catch() { ... } // from try @ 02288cfc with catch @ 02288cd0 */
      uVar12 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
      if ((uVar12 & 1) != 0) {
                    /* try { // try from 02288ce8 to 02388cfb has its CatchHandler @ 02288d2c */
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 02288cfc to 02388d3f has its CatchHandler @ 02288cd0 */
        UnityEngine_Object__Destroy_43c8114(uVar11,0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_80,*(undefined8 *)puVar8);
    lVar13 = *(long *)(param_1 + 0x38);
    if (lVar13 != 0) {
      iVar1 = *(int *)(lVar13 + 0x18);
      *(undefined4 *)(lVar13 + 0x18) = 0;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      if (0 < iVar1) {
                    /* catch() { ... } // from try @ 02288ce8 with catch @ 02288d2c */
        System_Array__Clear_4851dc8(*(undefined8 *)(lVar13 + 0x10),0,iVar1,0);
      }
      lVar13 = FUN_02133068(*(undefined8 *)puVar3,6);
      if (lVar13 != 0) {
        if (*(int *)(lVar13 + 0x18) != 0) {
          *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)puVar10;
          thunk_FUN_02134474((undefined8 *)(lVar13 + 0x20));
          if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0) {
            *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)puVar7;
            thunk_FUN_02134474((undefined8 *)(lVar13 + 0x28));
            if (2 < *(uint *)(lVar13 + 0x18)) {
                    /* try { // try from 02288d9c to 02388d9f has its CatchHandler @ 02288da8 */
              *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)puVar4;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02288d9c with catch @ 02288da8
                        */
              thunk_FUN_02134474((undefined8 *)(lVar13 + 0x30));
              if ((*(uint *)(lVar13 + 0x18) & 0xfffffffc) != 0) {
                *(undefined8 *)(lVar13 + 0x38) = *(undefined8 *)puVar5;
                thunk_FUN_02134474((undefined8 *)(lVar13 + 0x38));
                    /* try { // try from 02288dd4 to 02388e1f has its CatchHandler @ 02288dd4
                       catch() { ... } // from try @ 02288dd4 with catch @ 02288dd4
                       catch() { ... } // from try @ 02288e2c with catch @ 02288dd4
                       catch() { ... } // from try @ 02288e6c with catch @ 02288dd4 */
                if (4 < *(uint *)(lVar13 + 0x18)) {
                  *(undefined8 *)(lVar13 + 0x40) = *(undefined8 *)puVar6;
                  thunk_FUN_02134474((undefined8 *)(lVar13 + 0x40));
                  if (5 < *(uint *)(lVar13 + 0x18)) {
                    *(undefined8 *)(lVar13 + 0x48) = *(undefined8 *)PTR_DAT_04cadab8;
                    thunk_FUN_02134474((undefined8 *)(lVar13 + 0x48));
                    if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
                    /* try { // try from 02288e20 to 02388e2b has its CatchHandler @ 02288eac */
                      uVar12 = 0;
                      uVar14 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
                      do {
                    /* try { // try from 02288e2c to 02388e5f has its CatchHandler @ 02288dd4 */
                        if (uVar14 <= uVar12) goto LAB_02288e7c;
                        if (*(long *)(param_1 + 0x10) == 0) goto LAB_02288e80;
                        Dino_BusSand_App_UI_UIPanel__Show_21f4018
                                  (*(long *)(param_1 + 0x10),
                                   *(undefined8 *)(lVar13 + 0x20 + uVar12 * 8),0,0);
                        uVar14 = (ulong)*(uint *)(lVar13 + 0x18);
                        uVar12 = uVar12 + 1;
                      } while ((long)uVar12 < (long)(int)*(uint *)(lVar13 + 0x18));
                    }
                    /* try { // try from 02288e60 to 02388e6b has its CatchHandler @ 02288ea8 */
                    /* try { // try from 02288e6c to 02388ebf has its CatchHandler @ 02288dd4 */
                    return;
                  }
                }
              }
            }
          }
        }
LAB_02288e7c:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
    }
  }
LAB_02288e80:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

