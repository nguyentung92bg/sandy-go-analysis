/* IL2CPP: Dino.BusSand.App.Fx$$Release
void Dino_BusSand_App_Fx__Release (UnityEngine_GameObject_o* go, System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Fx$$Release
   void Dino_BusSand_App_Fx__Release (UnityEngine_GameObject_o* go, System_String_o* key, const
   MethodInfo* method); */

void Dino_BusSand_App_Fx__Release_21510ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lStack_48;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b7bf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab470);
    FUN_02132f7c(PTR_DAT_04cab4b8);
    FUN_02132f7c(PTR_DAT_04cab448);
    FUN_02132f7c(PTR_DAT_04cab4c0);
    FUN_02132f7c(PTR_DAT_04cab4c8);
    FUN_02132f7c(PTR_DAT_04cab4d0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab4d8);
                    /* try { // try from 0225117c to 023511a3 has its CatchHandler @ 0225117c
                       catch(type#1 @ 00000000) { ... } // from try @ 0225117c with catch @ 0225117c
                       catch(type#1 @ 00000000) { ... } // from try @ 02251260 with catch @ 0225117c
                        */
    FUN_02132f7c(PTR_DAT_04cab4e0);
    FUN_02132f7c(PTR_DAT_04cab4e8);
    bRam0000000004f9b7bf = 1;
  }
  lStack_48 = 0;
                    /* try { // try from 022511a4 to 023511b3 has its CatchHandler @ 02251254 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  puVar2 = PTR_DAT_04cab448;
  if ((uVar5 & 1) != 0) {
                    /* try { // try from 022513a4 to 023513b7 has its CatchHandler @ 0225165c */
    return;
  }
  lVar6 = *(long *)PTR_DAT_04cab448;
                    /* try { // try from 022511d4 to 023511db has its CatchHandler @ 02251250 */
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar2;
  }
  puVar4 = PTR_DAT_04cab4d0;
  puVar3 = PTR_DAT_04cab4c0;
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  if (lVar6 != 0) {
    iVar7 = *(int *)(lVar6 + 0x18);
    if (-1 < iVar7 + -1) {
      do {
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar6 = *(long *)puVar2;
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
        if (lVar6 == 0) goto LAB_022513b4;
                    /* try { // try from 02251228 to 0235122f has its CatchHandler @ 0225124c */
        iVar7 = iVar7 + -1;
        lVar6 = System_Collections_Generic_List_object___get_Item_3a81924
                          (lVar6,iVar7,*(undefined8 *)puVar4);
        if (lVar6 == 0) goto LAB_022513b4;
        uVar9 = *(undefined8 *)(lVar6 + 0x10);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02251228 with catch @ 0225124c
                        */
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022511d4 with catch @ 02251250
                        */
          thunk_FUN_0218fdac();
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022511a4 with catch @ 02251254
                        */
                    /* try { // try from 02251258 to 0235125f has its CatchHandler @ 02251268 */
                    /* try { // try from 02251260 to 0235126b has its CatchHandler @ 0225117c */
        uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar9,param_1,0);
        if ((uVar5 & 1) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02251258 with catch @ 02251268
                        */
          lVar6 = *(long *)puVar2;
                    /* try { // try from 0225126c to 0235129b has its CatchHandler @ 0225126c
                       catch() { ... } // from try @ 0225126c with catch @ 0225126c
                       catch() { ... } // from try @ 022514f8 with catch @ 0225126c
                       catch() { ... } // from try @ 02251620 with catch @ 0225126c */
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
          if (lVar6 == 0) goto LAB_022513b4;
          System_Collections_Generic_List_object___RemoveAt_3a833a0
                    (lVar6,iVar7,*(undefined8 *)puVar3);
        }
      } while (0 < iVar7);
    }
                    /* try { // try from 0225129c to 023512af has its CatchHandler @ 02251674 */
    if (param_1 != 0) {
      UnityEngine_GameObject__SetActive_43c1408(param_1,0,0);
      lVar6 = UnityEngine_GameObject__get_transform_43c1048(param_1,0);
                    /* try { // try from 022512bc to 023512cf has its CatchHandler @ 02251670 */
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar9 = Dino_BusSand_App_Fx__get_Root_2150538();
      if (lVar6 != 0) {
        UnityEngine_Transform__SetParent_43d1e34(lVar6,uVar9,0,0);
                    /* try { // try from 022512f0 to 023512ff has its CatchHandler @ 02251668 */
        if (**(long **)(*(long *)puVar2 + 0xb8) != 0) {
                    /* try { // try from 02251310 to 0235131b has its CatchHandler @ 02251664 */
          uVar5 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                            (**(long **)(*(long *)puVar2 + 0xb8),param_2,&lStack_48,
                             *(undefined8 *)PTR_DAT_04cab470);
          if ((uVar5 & 1) == 0) {
                    /* try { // try from 0225131c to 0235132f has its CatchHandler @ 02251660 */
            lVar6 = *(long *)puVar2;
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar6 = *(long *)puVar2;
            }
                    /* try { // try from 0225133c to 0235133f has its CatchHandler @ 02251650 */
            lVar8 = **(long **)(lVar6 + 0xb8);
            lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab4e8);
            System_Collections_Generic_Stack_object____ctor_2eed478
                      (lVar6,*(undefined8 *)PTR_DAT_04cab4e0);
            lStack_48 = lVar6;
            if (lVar8 == 0) goto LAB_022513b4;
                    /* try { // try from 02251370 to 02351373 has its CatchHandler @ 0225166c */
            System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                      (lVar8,param_2,lVar6,*(undefined8 *)PTR_DAT_04cab4b8);
          }
          if (lStack_48 != 0) {
                    /* try { // try from 02251390 to 02351397 has its CatchHandler @ 02251678 */
            System_Collections_Generic_Stack_object___Push_2eedb68
                      (lStack_48,param_1,*(undefined8 *)PTR_DAT_04cab4d8);
            return;
          }
        }
      }
    }
  }
LAB_022513b4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

