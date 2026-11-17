/* IL2CPP: Dino.BusSand.App.Fx$$ClearAll
void Dino_BusSand_App_Fx__ClearAll (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Fx$$ClearAll
   void Dino_BusSand_App_Fx__ClearAll (const MethodInfo* method); */

void Dino_BusSand_App_Fx__ClearAll_21517b4(void)

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
  long lStack_68;
  
                    /* try { // try from 022517b4 to 023517bf has its CatchHandler @ 02251770 */
  puVar2 = PTR_DAT_04cab448;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022517ac with catch @ 022517bc
                        */
                    /* try { // try from 022517c0 to 02351803 has its CatchHandler @ 022517c0
                       catch() { ... } // from try @ 022517c0 with catch @ 022517c0
                       catch() { ... } // from try @ 0225180c with catch @ 022517c0 */
  if ((bRam0000000004f9b7c3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab470);
    FUN_02132f7c(PTR_DAT_04cab4b8);
                    /* try { // try from 02251804 to 0235180b has its CatchHandler @ 02251830 */
    FUN_02132f7c(PTR_DAT_04cab448);
                    /* try { // try from 0225180c to 02351843 has its CatchHandler @ 022517c0 */
    FUN_02132f7c(PTR_DAT_04cab500);
    FUN_02132f7c(PTR_DAT_04cab4c8);
    FUN_02132f7c(PTR_DAT_04cab4d0);
                    /* catch() { ... } // from try @ 02251804 with catch @ 02251830 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab4d8);
    FUN_02132f7c(PTR_DAT_04cab4e0);
    FUN_02132f7c(PTR_DAT_04cab4e8);
    bRam0000000004f9b7c3 = 1;
  }
  lVar7 = *(long *)puVar2;
  lStack_68 = 0;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar2;
  }
  puVar6 = PTR_DAT_04cab4d8;
  puVar5 = PTR_DAT_04cab4d0;
  puVar4 = PTR_DAT_04cab4b8;
  puVar3 = PTR_DAT_04cab470;
  puVar1 = PTR_DAT_04ca9ae8;
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  if (lVar9 != 0) {
    iVar10 = *(int *)(lVar9 + 0x18);
    if (-1 < iVar10 + -1) {
      do {
        lVar7 = *(long *)puVar2;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar7 = *(long *)puVar2;
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
        if (lVar7 == 0) goto LAB_02251a78;
        iVar10 = iVar10 + -1;
        lVar7 = System_Collections_Generic_List_object___get_Item_3a81924
                          (lVar7,iVar10,*(undefined8 *)puVar5);
        if (lVar7 == 0) goto LAB_02251a78;
        uVar11 = *(undefined8 *)(lVar7 + 0x10);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
        if ((uVar8 & 1) != 0) {
          if (*(long *)(lVar7 + 0x10) == 0) goto LAB_02251a78;
          UnityEngine_GameObject__SetActive_43c1408(*(long *)(lVar7 + 0x10),0,0);
          if (*(long *)(lVar7 + 0x10) == 0) goto LAB_02251a78;
          lVar9 = UnityEngine_GameObject__get_transform_43c1048(*(long *)(lVar7 + 0x10),0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar2);
          }
          uVar11 = Dino_BusSand_App_Fx__get_Root_2150538();
          if (lVar9 == 0) goto LAB_02251a78;
          UnityEngine_Transform__SetParent_43d1e34(lVar9,uVar11,0,0);
          if (**(long **)(*(long *)puVar2 + 0xb8) == 0) goto LAB_02251a78;
          uVar8 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                            (**(long **)(*(long *)puVar2 + 0xb8),*(undefined8 *)(lVar7 + 0x18),
                             &lStack_68,*(undefined8 *)puVar3);
          if ((uVar8 & 1) == 0) {
            lVar9 = *(long *)puVar2;
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
            if (lVar12 == 0) goto LAB_02251a78;
            System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                      (lVar12,uVar11,lVar9,*(undefined8 *)puVar4);
          }
          if (lStack_68 == 0) goto LAB_02251a78;
          System_Collections_Generic_Stack_object___Push_2eedb68
                    (lStack_68,*(undefined8 *)(lVar7 + 0x10),*(undefined8 *)puVar6);
        }
      } while (0 < iVar10);
      lVar7 = *(long *)puVar2;
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar2;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
    if (lVar7 != 0) {
      iVar10 = *(int *)(lVar7 + 0x18);
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (0 < iVar10) {
        System_Array__Clear_4851dc8(*(undefined8 *)(lVar7 + 0x10),0,iVar10,0);
      }
      return;
    }
  }
LAB_02251a78:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

