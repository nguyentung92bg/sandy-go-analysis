/* IL2CPP: Dino.BusSand.App.UI.KitPrefabs$$ClearCache
void Dino_BusSand_App_UI_KitPrefabs__ClearCache (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitPrefabs$$ClearCache
   void Dino_BusSand_App_UI_KitPrefabs__ClearCache (const MethodInfo* method); */

void Dino_BusSand_App_UI_KitPrefabs__ClearCache_2182008(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  
  puVar4 = PTR_DAT_04cac4f8;
  if ((bRam0000000004f9b932 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04cad618);
    FUN_02132f7c(PTR_DAT_04cad620);
    FUN_02132f7c(PTR_DAT_04cad628);
    FUN_02132f7c(PTR_DAT_04cad630);
    FUN_02132f7c(PTR_DAT_04cad638);
    FUN_02132f7c(PTR_DAT_04cac4f8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad640);
    bRam0000000004f9b932 = 1;
  }
  lVar8 = *(long *)puVar4;
  uStack_70 = 0;
  puStack_68 = (undefined8 *)0x0;
                    /* try { // try from 022820b0 to 023820f3 has its CatchHandler @ 022820b0
                       catch() { ... } // from try @ 022820b0 with catch @ 022820b0
                       catch() { ... } // from try @ 022823e4 with catch @ 022820b0
                       catch() { ... } // from try @ 022824c8 with catch @ 022820b0
                       catch() { ... } // from try @ 02282618 with catch @ 022820b0 */
  lStack_60 = 0;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar4;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
  if ((lVar8 != 0) &&
     (lVar8 = System_Collections_Generic_Dictionary_object__object___get_Values_34b41c8
                        (lVar8,*(undefined8 *)PTR_DAT_04cad620), puVar7 = PTR_DAT_04cad630,
     puVar6 = PTR_DAT_04cad628, puVar5 = PTR_DAT_04cad618, puVar3 = PTR_DAT_04caa210,
     puVar2 = PTR_DAT_04ca9ae8, lVar8 != 0)) {
                    /* try { // try from 022820f4 to 023820f7 has its CatchHandler @ 022826ac */
                    /* try { // try from 0228211c to 0238212b has its CatchHandler @ 022826e4 */
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator_30b7f48
              (&uStack_88,lVar8,*(undefined8 *)PTR_DAT_04cad640);
    lStack_60 = lStack_78;
    puStack_68 = puStack_80;
    uStack_70 = uStack_88;
    uStack_88 = 0;
    puStack_80 = &uStack_70;
    while (uVar9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext_364630c
                             (&uStack_70,*(undefined8 *)puVar7), lVar8 = lStack_60, (uVar9 & 1) != 0
          ) {
                    /* try { // try from 02282148 to 02382157 has its CatchHandler @ 022826e0 */
      if (lStack_60 != 0) {
        uVar11 = *(undefined8 *)(lStack_60 + 0x18);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
                    /* try { // try from 02282174 to 023821b3 has its CatchHandler @ 022826ac */
        if ((uVar9 & 1) != 0) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar9 = UnityEngine_Application__get_isPlaying_4351eec(0);
          uVar11 = *(undefined8 *)(lVar8 + 0x18);
          iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
          if ((uVar9 & 1) == 0) {
                    /* try { // try from 022821bc to 023821c7 has its CatchHandler @ 022826a8 */
            if (iVar1 == 0) {
              thunk_FUN_0218fdac();
            }
            UnityEngine_Object__DestroyImmediate_43c8260(uVar11,0);
          }
          else {
            if (iVar1 == 0) {
              thunk_FUN_0218fdac();
            }
            UnityEngine_Object__Destroy_43c8114(uVar11,0);
          }
        }
      }
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose_3646308
              (&uStack_70,*(undefined8 *)puVar6);
    lVar8 = *(long *)puVar4;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)puVar4;
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
    if (lVar8 != 0) {
      System_Collections_Generic_Dictionary_object__object___Clear_34b452c
                (lVar8,*(undefined8 *)puVar5);
      puVar10 = (undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
      *puVar10 = 0;
      thunk_FUN_02134474(puVar10,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

