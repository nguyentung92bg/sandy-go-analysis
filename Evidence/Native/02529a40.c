/* IL2CPP: Dino.BusSand.Core.StageEngine$$ShuffleTruckColors
System_Collections_Generic_List_SimEvent__o* Dino_BusSand_Core_StageEngine__ShuffleTruckColors (Dino_BusSand_Core_StageEngine_o* __this, int32_t seed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$ShuffleTruckColors
   System_Collections_Generic_List_SimEvent__o* Dino_BusSand_Core_StageEngine__ShuffleTruckColors
   (Dino_BusSand_Core_StageEngine_o* __this, int32_t seed, const MethodInfo* method); */

undefined8
Dino_BusSand_Core_StageEngine__ShuffleTruckColors_2429a40(long param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  if ((bRam0000000004f9cbb5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbee30);
    FUN_02132f7c(PTR_DAT_04cbee38);
    FUN_02132f7c(PTR_DAT_04cbe460);
    FUN_02132f7c(PTR_DAT_04cbee40);
    FUN_02132f7c(PTR_DAT_04cbee48);
    FUN_02132f7c(PTR_DAT_04cbee50);
    FUN_02132f7c(PTR_DAT_04cbee58);
    FUN_02132f7c(PTR_DAT_04cbee60);
    FUN_02132f7c(PTR_DAT_04cb58d0);
    FUN_02132f7c(PTR_DAT_04cbea60);
    bRam0000000004f9cbb5 = 1;
  }
  lVar8 = *(long *)(param_1 + 0x98);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  lStack_38 = 0;
  puStack_58 = (undefined8 *)0x0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (lVar8 != 0) {
    iVar1 = *(int *)(lVar8 + 0x18);
    *(undefined4 *)(lVar8 + 0x18) = 0;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear_4851dc8(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
    }
    if ((*(char *)(param_1 + 0x80) != '\0') ||
       (lVar8 = Dino_BusSand_Core_ColorShuffle__TryPlan_240dbb8(param_1,param_2,2,0), lVar8 == 0)) {
LAB_02529b30:
      return *(undefined8 *)(param_1 + 0x98);
    }
    System_Collections_Generic_Dictionary_int__TruckPayload___GetEnumerator_344544c
              (&uStack_90,lVar8,*(undefined8 *)PTR_DAT_04cbee30);
    puVar4 = PTR_DAT_04cbee48;
    puVar3 = PTR_DAT_04cbe460;
    puStack_58 = puStack_88;
    uStack_60 = uStack_90;
    uStack_48 = uStack_78;
    uStack_50 = uStack_80;
    uStack_90 = 0;
    puStack_88 = &uStack_60;
    while (uVar7 = System_Collections_Generic_Dictionary_Enumerator_int__TruckPayload___MoveNext_363476c
                             (&uStack_60,*(undefined8 *)puVar4), uVar5 = uStack_50, (uVar7 & 1) != 0
          ) {
      uStack_70 = (undefined4)uStack_50;
      uStack_6c = (undefined4)(uStack_50 >> 0x20);
      uStack_68 = (undefined4)uStack_48;
      if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      System_Collections_Generic_Dictionary_int__TruckPayload___set_Item_344500c
                (*(long *)(param_1 + 0x50),uStack_50 & 0xffffffff,
                 CONCAT44((undefined4)uStack_48,uStack_6c),*(undefined8 *)puVar3);
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar7 = Dino_BusSand_Core_TruckGrid__TryGet_241d34c
                        (*(long *)(param_1 + 0x28),uVar5 & 0xffffffff,&lStack_38);
      if ((uVar7 & 1) != 0) {
        if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        *(char *)(lStack_38 + 0x4c) = (char)(uVar5 >> 0x20);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__TruckPayload___Dispose_3634898
              (&uStack_60,*(undefined8 *)PTR_DAT_04cbee40);
    puVar3 = PTR_DAT_04cbee38;
    lVar9 = *(long *)(param_1 + 0x28);
    if (lVar9 != 0) {
      *(int *)(lVar9 + 0x48) = *(int *)(lVar9 + 0x48) + 1;
      lVar9 = *(long *)(param_1 + 0x98);
      uVar6 = System_Collections_Generic_Dictionary_int__TruckPayload___get_Count_3444cb8
                        (lVar8,*(undefined8 *)puVar3);
      uStack_a8 = CONCAT44(uVar6,7);
      uStack_98 = 0;
      thunk_FUN_02134474(&uStack_98,0);
      if (lVar9 != 0) {
        lVar8 = *(long *)(lVar9 + 0x10);
        lVar10 = *(long *)PTR_DAT_04cb58d0;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar2 = *(uint *)(lVar9 + 0x18);
          if (uVar2 < *(uint *)(lVar8 + 0x18)) {
            lVar8 = lVar8 + (long)(int)uVar2 * 0x18;
            *(uint *)(lVar9 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar8 + 0x30) = uStack_98;
            *(undefined8 *)(lVar8 + 0x28) = 0;
            *(undefined8 *)(lVar8 + 0x20) = uStack_a8;
            thunk_FUN_02134474((undefined8 *)(lVar8 + 0x30),0);
          }
          else {
            puStack_88 = (undefined8 *)0x0;
            uStack_90 = uStack_a8;
            uStack_80 = uStack_98;
            System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                      (lVar9,&uStack_90,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_02529b30;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

