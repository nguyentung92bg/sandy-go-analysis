/* IL2CPP: Dino.BusSand.View.GameView$$RefreshArrows
void Dino_BusSand_View_GameView__RefreshArrows (Dino_BusSand_View_GameView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$RefreshArrows
   void Dino_BusSand_View_GameView__RefreshArrows (Dino_BusSand_View_GameView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_GameView__RefreshArrows_239e0ac
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  byte bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_58;
  
                    /* try { // try from 0249e0ac to 0259e0bb has its CatchHandler @ 0249e21c */
  puVar6 = PTR_DAT_04cb2870;
                    /* try { // try from 0249e0bc to 0259e207 has its CatchHandler @ 0249dfb0 */
  if ((bRam0000000004f9c92b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc4b8);
    FUN_02132f7c(PTR_DAT_04cab9e0);
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04cb2870);
    FUN_02132f7c(PTR_DAT_04cab9f8);
    bRam0000000004f9c92b = 1;
  }
  lVar10 = *(long *)puVar6;
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_b0 = 0;
  uStack_58 = 0;
  lStack_c8 = 0;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar10 = *(long *)puVar6;
  }
  puVar8 = PTR_DAT_04cbc4b8;
  puVar5 = PTR_DAT_04cab9f8;
  puVar7 = PTR_DAT_04cab9e8;
  puVar6 = PTR_DAT_04cab9e0;
  if ((*(char *)(*(long *)(lVar10 + 0xb8) + 0x38) == '\0') ||
     (param_2 = *(float *)(param_4 + 0x110), *(float *)(param_4 + 0x10c) < param_2)) {
    bVar13 = 0;
  }
  else {
    bVar13 = *(byte *)(param_4 + 0x114) ^ 1;
  }
  if ((*(long *)(param_4 + 0x20) == 0) ||
     (lVar10 = *(long *)(*(long *)(param_4 + 0x20) + 0x28), lVar10 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uStack_58 = Dino_BusSand_Core_TruckGrid__get_Trucks_241c3d0(lVar10,0);
  Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
            (&uStack_e0,&uStack_58,*(undefined8 *)puVar5);
  puVar5 = PTR_DAT_04caa200;
  fVar4 = _UNK_00e2094c;
  fVar3 = _UNK_00e20448;
  fVar2 = _UNK_00e201f4;
  fVar1 = _UNK_00e1fef8;
  lStack_b0 = lStack_d0;
  uStack_b8 = puStack_d8;
  uStack_c0 = uStack_e0;
                    /* try { // try from 0249e208 to 0259e20b has its CatchHandler @ 0249e218 */
                    /* try { // try from 0249e20c to 0259e20f has its CatchHandler @ 0249dfb0 */
                    /* try { // try from 0249e210 to 0259e213 has its CatchHandler @ 0249e214 */
  uStack_e0 = 0;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0249e210 with catch @ 0249e214
                       try { // try from 0249e214 to 0259e23b has its CatchHandler @ 0249dfb0 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0249e208 with catch @ 0249e218
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0249e0ac with catch @ 0249e21c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0249e098 with catch @ 0249e220
                        */
  puStack_d8 = &uStack_c0;
  do {
    do {
      uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                         (&uStack_c0,*(undefined8 *)puVar7);
      lVar10 = lStack_b0;
      if ((uVar11 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_c0,*(undefined8 *)puVar6);
        return;
      }
                    /* try { // try from 0249e23c to 0259e23f has its CatchHandler @ 0249e260 */
                    /* try { // try from 0249e240 to 0259e263 has its CatchHandler @ 0249dfb0 */
      if (lStack_b0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(long *)(param_4 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0249e3b4 to 0259e50f has its CatchHandler @ 0249e3b4
                       catch() { ... } // from try @ 0249e3b4 with catch @ 0249e3b4
                       catch() { ... } // from try @ 0249e5cc with catch @ 0249e3b4
                       catch() { ... } // from try @ 0249e6b8 with catch @ 0249e3b4
                       catch() { ... } // from try @ 0249e6fc with catch @ 0249e3b4
                       catch() { ... } // from try @ 0249e728 with catch @ 0249e3b4 */
        FUN_02133224();
      }
      uVar11 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                         (*(long *)(param_4 + 0xe0),*(undefined4 *)(lStack_b0 + 0x10),&lStack_c8,
                          *(undefined8 *)puVar8);
    } while ((uVar11 & 1) == 0);
                    /* catch() { ... } // from try @ 0249e23c with catch @ 0249e260 */
                    /* try { // try from 0249e264 to 0259e26b has its CatchHandler @ 0249e274 */
    if (*(long *)(param_4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar12 = *(long *)(*(long *)(param_4 + 0x20) + 0x28);
                    /* try { // try from 0249e26c to 0259e277 has its CatchHandler @ 0249dfb0 */
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0249e264 with catch @ 0249e274
                        */
    bVar9 = Dino_BusSand_Core_TruckGrid__CanTap_241c41c(lVar12,lVar10,0);
    lVar10 = lStack_c8;
    if ((bVar13 != 0 & bVar9) == 0) {
LAB_0249e35c:
      if (lStack_c8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
    else {
      if (lStack_c8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if ((*(char *)(lStack_c8 + 0x13c) == '\0') && (*(int *)(lStack_c8 + 0x2c) == 0)) {
        lVar12 = UnityEngine_Component__get_transform_43bcd18(lStack_c8,0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        fVar14 = (float)UnityEngine_Transform__get_position_43d0e48(lVar12,0);
        fVar16 = *(float *)(param_4 + 0x1e0);
        fVar17 = *(float *)(param_4 + 0x1e4);
        fVar15 = *(float *)(param_4 + 0x1e8);
        if (cRam0000000004f9b9df == '\0') {
          FUN_02132f7c(puVar5);
          cRam0000000004f9b9df = '\x01';
        }
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (*(long *)(param_4 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        fVar14 = fVar14 - fVar16;
        param_2 = param_2 - fVar17;
        param_3 = param_3 - fVar15;
        fVar16 = *(float *)(*(long *)(param_4 + 0x30) + 0xfc);
        fVar15 = fVar3;
        if (fVar3 <= fVar16) {
          fVar15 = fVar16;
        }
        fVar15 = (SQRT(param_3 * param_3 + fVar14 * fVar14 + param_2 * param_2) / fVar15) * fVar1 +
                 fVar2;
        fVar14 = fVar4;
        if (fVar15 <= fVar4) {
          fVar14 = fVar15;
        }
        param_2 = fVar2;
        param_3 = fVar1;
        Dino_BusSand_View_VehicleView__Freed_23fe168(fVar14,lVar10,0);
        goto LAB_0249e35c;
      }
    }
    Dino_BusSand_View_VehicleView__SetEscapable_23fd5f8(lStack_c8,bVar9 & 1,0);
  } while( true );
}

