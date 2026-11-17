/* IL2CPP: Dino.BusSand.View.GameView$$PickRoadBus
int32_t Dino_BusSand_View_GameView__PickRoadBus (Dino_BusSand_View_GameView_o* __this, UnityEngine_Vector2_o screen, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$PickRoadBus
   int32_t Dino_BusSand_View_GameView__PickRoadBus (Dino_BusSand_View_GameView_o* __this,
   UnityEngine_Vector2_o screen, const MethodInfo* method); */

undefined4
Dino_BusSand_View_GameView__PickRoadBus_23a0e24(undefined4 param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  float fVar4;
  float fVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_80;
  float fStack_78;
  
  if ((bRam0000000004f9c923 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc4b8);
    FUN_02132f7c(PTR_DAT_04cb1890);
    FUN_02132f7c(PTR_DAT_04cb1898);
    FUN_02132f7c(PTR_DAT_04cb18a0);
    FUN_02132f7c(PTR_DAT_04cb18a8);
    bRam0000000004f9c923 = 1;
  }
  fStack_78 = 0.0;
  uStack_80 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  lStack_90 = 0;
  lStack_b0 = 0;
  uStack_a8 = 0;
  if (*(long *)(param_3 + 0x30) != 0) {
    fVar11 = *(float *)(*(long *)(param_3 + 0x30) + 0x60) * 0.5;
    uVar6 = Dino_BusSand_View_GameView__GroundPoint_23a2940(param_1,param_2,param_3,&uStack_80);
    if ((uVar6 & 1) == 0) {
      uVar9 = 0xffffffff;
    }
    else {
      if (((*(long *)(param_3 + 0x30) == 0) || (*(long *)(param_3 + 0x20) == 0)) ||
         (lVar7 = *(long *)(*(long *)(param_3 + 0x20) + 0x20), lVar7 == 0)) goto LAB_024a10a8;
      fVar13 = *(float *)(*(long *)(param_3 + 0x30) + 0x60) * _UNK_00e2032c;
      uStack_a8 = Dino_BusSand_Core_Road__get_Buses_2411e9c(lVar7,0);
      Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
                (&uStack_c8,&uStack_a8,*(undefined8 *)PTR_DAT_04cb18a8);
      fVar5 = fStack_78;
      puVar3 = PTR_DAT_04cbc4b8;
      puVar2 = PTR_DAT_04cb1898;
      puVar1 = PTR_DAT_04caa200;
      uStack_98 = puStack_c0;
      uStack_a0 = uStack_c8;
      puStack_c0 = &uStack_a0;
      fVar4 = (float)uStack_80;
      lStack_90 = lStack_b8;
      uVar9 = 0xffffffff;
      uStack_c8 = 0;
      while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                               (&uStack_a0,*(undefined8 *)puVar2), lVar7 = lStack_90,
            (uVar6 & 1) != 0) {
        if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar6 = Dino_BusSand_Core_RoadBus__get_IsOnRoad_241186c(lStack_90,0);
        if ((uVar6 & 1) != 0) {
          if (*(long *)(param_3 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar6 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                            (*(long *)(param_3 + 0xe0),*(undefined4 *)(lVar7 + 0x10),&lStack_b0,
                             *(undefined8 *)puVar3);
          if ((uVar6 & 1) != 0) {
            if (lStack_b0 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar8 = UnityEngine_Component__get_transform_43bcd18(lStack_b0,0);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            fVar10 = (float)UnityEngine_Transform__get_position_43d0e48(lVar8,0);
            if (lStack_b0 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar8 = UnityEngine_Component__get_transform_43bcd18(lStack_b0,0);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            UnityEngine_Transform__get_position_43d0e48(lVar8,0);
            fVar12 = fVar11;
            if (cRam0000000004f9b9df == '\0') {
              FUN_02132f7c(puVar1);
              cRam0000000004f9b9df = '\x01';
            }
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            fVar10 = SQRT((fVar4 - fVar10) * (fVar4 - fVar10) + (fVar5 - fVar11) * (fVar5 - fVar11))
            ;
            fVar11 = fVar12;
            if (fVar10 < fVar13) {
              uVar9 = *(undefined4 *)(lVar7 + 0x10);
              fVar13 = fVar10;
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_a0,*(undefined8 *)PTR_DAT_04cb1890);
    }
    return uVar9;
  }
LAB_024a10a8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

