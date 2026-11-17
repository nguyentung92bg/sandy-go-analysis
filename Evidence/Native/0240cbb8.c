/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$CapacityBeat
void Dino_BusSand_App_UI_HudPanel__CapacityBeat (Dino_BusSand_App_UI_HudPanel_o* __this, int32_t oldCap, int32_t cap, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$CapacityBeat
   void Dino_BusSand_App_UI_HudPanel__CapacityBeat (Dino_BusSand_App_UI_HudPanel_o* __this, int32_t
   oldCap, int32_t cap, const MethodInfo* method); */

void Dino_BusSand_App_UI_HudPanel__CapacityBeat_230cbb8(long param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((bRam0000000004f9c522 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04cafec0);
    FUN_02132f7c(PTR_DAT_04cafec8);
    FUN_02132f7c(PTR_DAT_04cb18b8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cad4d8);
    bRam0000000004f9c522 = 1;
  }
  puVar6 = PTR_DAT_04ca9ae8;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar10 = UnityEngine_Transform__Find_43d4bec
                       (*(long *)(param_1 + 0x70),*(undefined8 *)PTR_DAT_04cad4d8,0);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar6);
    }
    puVar6 = PTR_DAT_04cad4c0;
    uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
    if ((uVar11 & 1) != 0) {
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_UiMotion__Punch_2283d78(_UNK_00e2065c,_UNK_00e20324,uVar10,0,0,0);
    }
    if (*(long *)(param_1 + 0x90) != 0) {
      uVar10 = TMPro_TMP_Text__get_transform_42cd604(*(long *)(param_1 + 0x90),0);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar6);
      }
      Dino_BusSand_App_UI_UiMotion__Punch_2283d78(_UNK_00e204e8,_UNK_00e20324,uVar10,0,0,0);
      puVar9 = PTR_DAT_04cb18b8;
      puVar8 = PTR_DAT_04cafec8;
      puVar7 = PTR_DAT_04caa208;
      fVar5 = _UNK_00e205f8;
      uVar4 = _UNK_00e20390;
      uVar3 = _UNK_00e20184;
      fVar2 = _UNK_00e20174;
      uVar1 = _UNK_00e200b4;
      if (param_2 < param_3) {
        iVar13 = 0;
        do {
          lVar12 = *(long *)(param_1 + 0x98);
          if (lVar12 == 0) goto LAB_0240ce74;
          if (*(int *)(lVar12 + 0x18) <= param_2 + iVar13) break;
          lVar12 = System_Collections_Generic_List_object___get_Item_3a81924
                             (lVar12,param_2 + iVar13,*(undefined8 *)puVar8);
          if (lVar12 == 0) goto LAB_0240ce74;
          uVar10 = UnityEngine_Component__get_transform_43bcd18(lVar12,0);
          if (cRam0000000004f9b65e == '\0') {
            FUN_02132f7c(puVar7);
            cRam0000000004f9b65e = '\x01';
          }
          lVar12 = *(long *)(*(long *)puVar7 + 0xb8);
          uStack_a0 = 0;
          uStack_98 = 0;
          System_Nullable_Vector3____ctor_2bd0e4c
                    (*(undefined4 *)(lVar12 + 0xc),*(undefined4 *)(lVar12 + 0x10),
                     *(undefined4 *)(lVar12 + 0x14),&uStack_a0,*(undefined8 *)puVar9);
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                    ((float)iVar13 * fVar2 + fVar5,uVar4,uVar1,uVar3,uVar10,uStack_a0,uStack_98,0);
          iVar13 = iVar13 + 1;
        } while ((param_2 - param_3) + iVar13 != 0);
      }
      if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_Haptics__Play_2388ed8(1,0);
      return;
    }
  }
LAB_0240ce74:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

