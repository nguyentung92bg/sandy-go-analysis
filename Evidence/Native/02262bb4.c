/* IL2CPP: Dino.BusSand.App.UiAssets$$Ensure
void Dino_BusSand_App_UiAssets__Ensure (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UiAssets$$Ensure
   void Dino_BusSand_App_UiAssets__Ensure (const MethodInfo* method); */

void Dino_BusSand_App_UiAssets__Ensure_2162bb4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  
  puVar3 = PTR_DAT_04cab490;
  if ((bRam0000000004f9b839 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab240);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac2e0);
                    /* try { // try from 02262c08 to 02362cef has its CatchHandler @ 02262c08
                       catch() { ... } // from try @ 02262c08 with catch @ 02262c08
                       catch() { ... } // from try @ 02262cfc with catch @ 02262c08 */
    FUN_02132f7c(PTR_DAT_04cac2e8);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cac2f0);
    FUN_02132f7c(PTR_DAT_04cac2f8);
    FUN_02132f7c(PTR_DAT_04cac300);
    bRam0000000004f9b839 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)puVar1;
  uVar10 = **(undefined8 **)(lVar6 + 0xb8);
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar8);
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
  puVar5 = PTR_DAT_04cac2f8;
  puVar4 = PTR_DAT_04cac2e0;
  puVar2 = PTR_DAT_04cab240;
  if ((uVar7 & 1) != 0) {
    return;
  }
  fVar11 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  uVar10 = UnityEngine_Resources__Load_object__2891e2c(*(undefined8 *)puVar5,*(undefined8 *)puVar4);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
                    /* try { // try from 02262cf0 to 02362cfb has its CatchHandler @ 02262d24 */
    thunk_FUN_0218fdac(lVar6);
    lVar6 = *(long *)puVar3;
  }
                    /* try { // try from 02262cfc to 02362d37 has its CatchHandler @ 02262c08 */
  **(undefined8 **)(lVar6 + 0xb8) = uVar10;
  puVar4 = PTR_DAT_04cac300;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar3 + 0xb8),uVar10);
  fVar12 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
                    /* catch() { ... } // from try @ 02262cf0 with catch @ 02262d24 */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_BootTrace__Took_214e544((fVar12 - fVar11) * 1000.0,*(undefined8 *)puVar4);
  uVar10 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_Debug__LogError_4361614(*(undefined8 *)PTR_DAT_04cac2f0,0);
    uVar10 = UnityEngine_ScriptableObject__CreateInstance_object__28ad0cc
                       (*(undefined8 *)PTR_DAT_04cac2e8);
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar6);
      lVar6 = *(long *)puVar3;
    }
    **(undefined8 **)(lVar6 + 0xb8) = uVar10;
    thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar3 + 0xb8),uVar10);
  }
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar3;
  }
  if (**(long **)(lVar6 + 0xb8) != 0) {
    uVar10 = Dino_BusSand_App_UiAssets__Map_2162f30
                       (*(undefined8 *)(**(long **)(lVar6 + 0xb8) + 0x18));
    puVar9 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *puVar9 = uVar10;
    thunk_FUN_02134474(puVar9,uVar10);
    if (**(long **)(*(long *)puVar3 + 0xb8) != 0) {
      uVar10 = Dino_BusSand_App_UiAssets__Map_2162f30
                         (*(undefined8 *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x20));
      puVar9 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
      *puVar9 = uVar10;
      thunk_FUN_02134474(puVar9,uVar10);
      if (**(long **)(*(long *)puVar3 + 0xb8) != 0) {
        uVar10 = Dino_BusSand_App_UiAssets__Map_2162f30
                           (*(undefined8 *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x28));
                    /* try { // try from 02262e74 to 02362e77 has its CatchHandler @ 02262e80 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02262e74 with catch @ 02262e80
                        */
        puVar9 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
        *puVar9 = uVar10;
        thunk_FUN_02134474(puVar9,uVar10);
        if (**(long **)(*(long *)puVar3 + 0xb8) != 0) {
          uVar10 = Dino_BusSand_App_UiAssets__Map_2162f30
                             (*(undefined8 *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x30));
          puVar9 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
          *puVar9 = uVar10;
          thunk_FUN_02134474(puVar9,uVar10);
          if (**(long **)(*(long *)puVar3 + 0xb8) != 0) {
            uVar10 = Dino_BusSand_App_UiAssets__Map_2162f30
                               (*(undefined8 *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x38));
            puVar9 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
            *puVar9 = uVar10;
            thunk_FUN_02134474(puVar9,uVar10);
            if (**(long **)(*(long *)puVar3 + 0xb8) != 0) {
              uVar10 = Dino_BusSand_App_UiAssets__Map_2162f30
                                 (*(undefined8 *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x40));
              puVar9 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30);
              *puVar9 = uVar10;
              if (iRam00000000051c1b10 != 0) {
                FUN_02220bf0(1L << ((ulong)puVar9 >> 0xc & 0x3f),
                             ((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
              }
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

