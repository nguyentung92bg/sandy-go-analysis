/* IL2CPP: Dino.BusSand.View.GameView$$JamBeat
void Dino_BusSand_View_GameView__JamBeat (Dino_BusSand_View_GameView_o* __this, float felt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$JamBeat
   void Dino_BusSand_View_GameView__JamBeat (Dino_BusSand_View_GameView_o* __this, float felt, const
   MethodInfo* method); */

void Dino_BusSand_View_GameView__JamBeat_23a4698(float param_1,long param_2)

{
  bool bVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_38;
  
  puVar3 = PTR_DAT_04cad568;
  if ((bRam0000000004f9c927 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc4b8);
    FUN_02132f7c(PTR_DAT_04cb1890);
    FUN_02132f7c(PTR_DAT_04cb1898);
    FUN_02132f7c(PTR_DAT_04cb18a0);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cb2870);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04cb18a8);
    bRam0000000004f9c927 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_38 = 0;
  lStack_88 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b94e == '\0') {
    FUN_02132f7c(PTR_DAT_04cad568);
    cRam0000000004f9b94e = '\x01';
  }
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar3;
  }
  puVar3 = PTR_DAT_04cab238;
  if (**(long **)(lVar8 + 0xb8) != 0) {
    Dino_BusSand_GameAudio__JamBeat_23847c4(param_1,**(long **)(lVar8 + 0xb8),0);
  }
  bVar1 = _UNK_00e20094 < param_1;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_Haptics__Play_2388ed8(bVar1);
  puVar7 = PTR_DAT_04cbc4b8;
  puVar6 = PTR_DAT_04cb2870;
  puVar5 = PTR_DAT_04cb18a8;
  puVar4 = PTR_DAT_04cb1898;
  puVar3 = PTR_DAT_04cb1890;
  if ((*(long *)(param_2 + 0x20) != 0) &&
     (lVar8 = *(long *)(*(long *)(param_2 + 0x20) + 0x20), lVar8 != 0)) {
    uStack_38 = Dino_BusSand_Core_Road__get_Buses_2411e9c(lVar8,0);
    Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
              (&uStack_a0,&uStack_38,*(undefined8 *)puVar5);
    fVar2 = _UNK_00e2094c;
    lStack_70 = lStack_90;
    uStack_78 = puStack_98;
    uStack_80 = uStack_a0;
    uStack_a0 = 0;
    fVar11 = param_1 * _UNK_00e20a94 + _UNK_00e2043c;
    fVar12 = param_1 * _UNK_00e20aec + _UNK_00e20754;
    puStack_98 = &uStack_80;
    while( true ) {
      uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_80,*(undefined8 *)puVar4);
      lVar8 = lStack_70;
      if ((uVar9 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_80,*(undefined8 *)puVar3);
        return;
      }
      if (lStack_70 == 0) break;
      uVar9 = Dino_BusSand_Core_RoadBus__get_HasRoadPosition_2411880(lStack_70,0);
      if ((uVar9 & 1) != 0) {
        if (*(long *)(param_2 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar9 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                          (*(long *)(param_2 + 0xe0),*(undefined4 *)(lVar8 + 0x10),&lStack_88,
                           *(undefined8 *)puVar7);
        if ((uVar9 & 1) != 0) {
          if (lStack_88 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (*(int *)(lStack_88 + 0x2c) == 4) {
            lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lStack_88,0);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar9 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar8,0);
            if ((uVar9 & 1) != 0) {
              if (lStack_88 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              Dino_BusSand_View_VehicleView__Kick_23fd8a0(fVar11,0,lStack_88,0);
              lVar8 = lStack_88;
              if (fVar2 < param_1) {
                if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                lVar10 = *(long *)(*(long *)puVar6 + 0xb8);
                Dino_BusSand_View_VehicleView__Flash_23fddcc
                          (fVar12,*(undefined4 *)(lVar10 + 0x48),*(undefined4 *)(lVar10 + 0x4c),
                           *(undefined4 *)(lVar10 + 0x50),*(undefined4 *)(lVar10 + 0x54),lVar8,0);
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

