/* IL2CPP: Dino.BusSand.View.VehicleView$$GlassBand
UnityEngine_Vector2_o Dino_BusSand_View_VehicleView__GlassBand (Dino_BusSand_ModelEntry_o* m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$GlassBand
   UnityEngine_Vector2_o Dino_BusSand_View_VehicleView__GlassBand (Dino_BusSand_ModelEntry_o* m,
   const MethodInfo* method); */

undefined4 Dino_BusSand_View_VehicleView__GlassBand_23f83f4(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_70 [4];
  float fStack_6c;
  float fStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar3 = PTR_DAT_04cbc460;
  if ((bRam0000000004f9cad7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbdf48);
    FUN_02132f7c(PTR_DAT_04cbdef0);
    FUN_02132f7c(PTR_DAT_04cbdf50);
    FUN_02132f7c(PTR_DAT_04cbc460);
    FUN_02132f7c(PTR_DAT_04cb6e08);
    bRam0000000004f9cad7 = 1;
  }
  lVar5 = *(long *)puVar3;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar3;
  }
  if ((param_1 != 0) && (lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28), lVar5 != 0)) {
    uVar6 = System_Collections_Generic_Dictionary_object__Vector2___TryGetValue_34c74f0
                      (lVar5,*(undefined8 *)(param_1 + 0x10),&uStack_48,
                       *(undefined8 *)PTR_DAT_04cbdf48);
    if ((uVar6 & 1) != 0) {
LAB_024f8528:
      return (undefined4)uStack_48;
    }
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar3;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x60);
    if (lVar5 != 0) {
      uVar6 = System_Collections_Generic_Dictionary_object__Vector4___TryGetValue_34cac28
                        (lVar5,*(undefined8 *)(param_1 + 0x10),&uStack_58,
                         *(undefined8 *)PTR_DAT_04cbdef0);
      if ((uVar6 & 1) == 0) {
        iVar4 = Dino_BusSand_ModelEntry__Slot_237db04(param_1,*(undefined8 *)PTR_DAT_04cb6e08,0);
        lVar5 = *(long *)(param_1 + 0x18);
        if (lVar5 == 0) goto LAB_024f8698;
        UnityEngine_Mesh__get_bounds_438fac4(auStack_70,lVar5,0);
        fVar12 = (fStack_6c + fStack_60) * _UNK_00e2094c;
        UnityEngine_Mesh__get_bounds_438fac4(auStack_70,lVar5,0);
        fVar13 = (fStack_6c + fStack_60) * _UNK_00e1fea8;
        if ((-1 < iVar4) &&
           (uVar6 = UnityEngine_Mesh__get_isReadable_438f37c(lVar5,0), (uVar6 & 1) != 0)) {
          lVar7 = UnityEngine_Mesh__get_vertices_4390dfc(lVar5,0);
          lVar5 = UnityEngine_Mesh__GetIndices_4394384(lVar5,iVar4,0);
          if (lVar5 == 0) goto LAB_024f8698;
          uVar1 = *(uint *)(lVar5 + 0x18);
          if ((int)uVar1 < 1) {
            fVar8 = -3.4028235e+38;
            fVar10 = 3.4028235e+38;
          }
          else {
            fVar10 = 3.4028235e+38;
            fVar8 = -3.4028235e+38;
            uVar9 = 0;
            do {
              if (uVar1 == uVar9) {
LAB_024f869c:
                    /* WARNING: Subroutine does not return */
                FUN_0213322c();
              }
              if (lVar7 == 0) goto LAB_024f8698;
              uVar2 = *(uint *)(lVar5 + (long)(int)uVar9 * 4 + 0x20);
              if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_024f869c;
              uVar9 = uVar9 + 1;
              fVar11 = *(float *)(lVar7 + (long)(int)uVar2 * 0xc + 0x24);
              if (fVar11 <= fVar10) {
                fVar10 = fVar11;
              }
              if (fVar8 <= fVar11) {
                fVar8 = fVar11;
              }
            } while ((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != uVar9);
          }
          if (fVar10 < fVar8) {
            fVar12 = fVar10;
            fVar13 = fVar8;
          }
        }
        lVar5 = *(long *)puVar3;
        uStack_48 = CONCAT44(fVar13,fVar12);
        iVar4 = *(int *)(lVar5 + 0xe4);
      }
      else {
        lVar5 = *(long *)puVar3;
        iVar4 = *(int *)(lVar5 + 0xe4);
        uStack_48 = uStack_58;
      }
      if (iVar4 == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar3;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
      if (lVar5 != 0) {
        System_Collections_Generic_Dictionary_object__Vector2___set_Item_34c5984
                  (uStack_48 & 0xffffffff,uStack_48._4_4_,lVar5,*(undefined8 *)(param_1 + 0x10),
                   *(undefined8 *)PTR_DAT_04cbdf50);
        goto LAB_024f8528;
      }
    }
  }
LAB_024f8698:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

