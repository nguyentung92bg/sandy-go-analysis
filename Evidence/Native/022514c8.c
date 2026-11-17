/* IL2CPP: Dino.BusSand.App.Fx$$Tick
void Dino_BusSand_App_Fx__Tick (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Fx$$Tick
   void Dino_BusSand_App_Fx__Tick (const MethodInfo* method); */

void Dino_BusSand_App_Fx__Tick_21514c8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  float fVar13;
  long lStack_68;
  
  puVar2 = PTR_DAT_04cab448;
                    /* try { // try from 022514ec to 023514f7 has its CatchHandler @ 02251648 */
  if ((bRam0000000004f9b7c2 & 1) == 0) {
                    /* try { // try from 022514f8 to 02351537 has its CatchHandler @ 0225126c */
    FUN_02132f7c(PTR_DAT_04cab470);
    FUN_02132f7c(PTR_DAT_04cab4b8);
    FUN_02132f7c(PTR_DAT_04cab448);
    FUN_02132f7c(PTR_DAT_04cab4c0);
    FUN_02132f7c(PTR_DAT_04cab4c8);
                    /* try { // try from 02251538 to 0235153b has its CatchHandler @ 02251678 */
    FUN_02132f7c(PTR_DAT_04cab4d0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab4d8);
    FUN_02132f7c(PTR_DAT_04cab4e0);
    FUN_02132f7c(PTR_DAT_04cab4e8);
                    /* try { // try from 02251574 to 0235157b has its CatchHandler @ 0225164c */
    bRam0000000004f9b7c2 = 1;
  }
  lStack_68 = 0;
  fVar13 = (float)UnityEngine_Time__get_time_43cd540(0);
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar2;
  }
  puVar6 = PTR_DAT_04cab4d8;
  puVar5 = PTR_DAT_04cab4d0;
  puVar4 = PTR_DAT_04cab4c0;
  puVar3 = PTR_DAT_04cab470;
  puVar1 = PTR_DAT_04ca9ae8;
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  if (lVar7 != 0) {
    iVar10 = *(int *)(lVar7 + 0x18);
    if (-1 < iVar10 + -1) {
      do {
        lVar7 = *(long *)puVar2;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar7 = *(long *)puVar2;
        }
                    /* try { // try from 022515f4 to 02351607 has its CatchHandler @ 02251658 */
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
        if (lVar7 == 0) goto LAB_022517b0;
        iVar10 = iVar10 + -1;
        lVar7 = System_Collections_Generic_List_object___get_Item_3a81924
                          (lVar7,iVar10,*(undefined8 *)puVar5);
        if (lVar7 == 0) goto LAB_022517b0;
                    /* try { // try from 02251610 to 0235161f has its CatchHandler @ 02251654 */
        uVar11 = *(undefined8 *)(lVar7 + 0x10);
                    /* try { // try from 02251620 to 0235168b has its CatchHandler @ 0225126c */
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar11,0,0);
        if ((uVar8 & 1) == 0) {
                    /* catch() { ... } // from try @ 02251370 with catch @ 0225166c */
                    /* catch() { ... } // from try @ 022512bc with catch @ 02251670 */
                    /* catch() { ... } // from try @ 0225129c with catch @ 02251674 */
          if (*(float *)(lVar7 + 0x20) <= fVar13) {
                    /* catch() { ... } // from try @ 02251390 with catch @ 02251678
                       catch() { ... } // from try @ 022513f4 with catch @ 02251678
                       catch() { ... } // from try @ 02251538 with catch @ 02251678
                       catch() { ... } // from try @ 022515d0 with catch @ 02251678 */
            lVar9 = *(long *)puVar2;
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar9 = *(long *)puVar2;
            }
                    /* try { // try from 0225168c to 023516bb has its CatchHandler @ 0225168c
                       catch(type#1 @ 00000000) { ... } // from try @ 0225168c with catch @ 0225168c
                       catch(type#1 @ 00000000) { ... } // from try @ 0225170c with catch @ 0225168c
                        */
            lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
            if (lVar9 == 0) goto LAB_022517b0;
            System_Collections_Generic_List_object___RemoveAt_3a833a0
                      (lVar9,iVar10,*(undefined8 *)puVar4);
            if (*(long *)(lVar7 + 0x10) == 0) goto LAB_022517b0;
            UnityEngine_GameObject__SetActive_43c1408(*(long *)(lVar7 + 0x10),0,0);
                    /* try { // try from 022516bc to 023516d7 has its CatchHandler @ 02251700 */
            if (*(long *)(lVar7 + 0x10) == 0) goto LAB_022517b0;
            lVar9 = UnityEngine_GameObject__get_transform_43c1048(*(long *)(lVar7 + 0x10),0);
            uVar11 = Dino_BusSand_App_Fx__get_Root_2150538();
            if (lVar9 == 0) goto LAB_022517b0;
                    /* try { // try from 022516dc to 023516e3 has its CatchHandler @ 022516fc */
            UnityEngine_Transform__SetParent_43d1e34(lVar9,uVar11,0,0);
            if (**(long **)(*(long *)puVar2 + 0xb8) == 0) goto LAB_022517b0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022516dc with catch @ 022516fc
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022516bc with catch @ 02251700
                        */
                    /* try { // try from 02251704 to 0235170b has its CatchHandler @ 02251714 */
            uVar8 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                              (**(long **)(*(long *)puVar2 + 0xb8),*(undefined8 *)(lVar7 + 0x18),
                               &lStack_68,*(undefined8 *)puVar3);
            if ((uVar8 & 1) == 0) {
                    /* try { // try from 0225170c to 02351717 has its CatchHandler @ 0225168c */
              lVar9 = *(long *)puVar2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02251704 with catch @ 02251714
                        */
              if (*(int *)(lVar9 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar9 = *(long *)puVar2;
              }
              uVar11 = *(undefined8 *)(lVar7 + 0x18);
              lVar12 = **(long **)(lVar9 + 0xb8);
              lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab4e8);
              System_Collections_Generic_Stack_object____ctor_2eed478
                        (lVar9,*(undefined8 *)PTR_DAT_04cab4e0);
              lStack_68 = lVar9;
              if (lVar12 == 0) goto LAB_022517b0;
                    /* try { // try from 02251770 to 02351783 has its CatchHandler @ 02251770
                       catch(type#1 @ 00000000) { ... } // from try @ 02251770 with catch @ 02251770
                       catch(type#1 @ 00000000) { ... } // from try @ 022517b4 with catch @ 02251770
                        */
              System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                        (lVar12,uVar11,lVar9,*(undefined8 *)PTR_DAT_04cab4b8);
            }
            if (lStack_68 == 0) goto LAB_022517b0;
                    /* try { // try from 02251784 to 0235178f has its CatchHandler @ 022517a8 */
            System_Collections_Generic_Stack_object___Push_2eedb68
                      (lStack_68,*(undefined8 *)(lVar7 + 0x10),*(undefined8 *)puVar6);
          }
        }
        else {
          lVar7 = *(long *)puVar2;
          if (*(int *)(lVar7 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 022514ec with catch @ 02251648 */
            thunk_FUN_0218fdac();
                    /* catch() { ... } // from try @ 02251574 with catch @ 0225164c */
            lVar7 = *(long *)puVar2;
          }
                    /* catch() { ... } // from try @ 0225133c with catch @ 02251650 */
                    /* catch() { ... } // from try @ 02251610 with catch @ 02251654 */
          lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
                    /* catch() { ... } // from try @ 022515f4 with catch @ 02251658 */
          if (lVar7 == 0) goto LAB_022517b0;
                    /* catch() { ... } // from try @ 022513a4 with catch @ 0225165c */
                    /* catch() { ... } // from try @ 0225131c with catch @ 02251660 */
                    /* catch() { ... } // from try @ 02251310 with catch @ 02251664 */
          System_Collections_Generic_List_object___RemoveAt_3a833a0
                    (lVar7,iVar10,*(undefined8 *)puVar4);
                    /* catch() { ... } // from try @ 022512f0 with catch @ 02251668 */
        }
      } while (0 < iVar10);
    }
                    /* try { // try from 02251790 to 02351797 has its CatchHandler @ 022517a4 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02251790 with catch @ 022517a4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02251784 with catch @ 022517a8
                        */
                    /* try { // try from 022517ac to 023517b3 has its CatchHandler @ 022517bc */
    return;
  }
LAB_022517b0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

