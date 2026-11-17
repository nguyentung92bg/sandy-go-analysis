/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$CounterTension
void Dino_BusSand_App_UI_HudPanel__CounterTension (Dino_BusSand_App_UI_HudPanel_o* __this, int32_t road, int32_t cap, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$CounterTension
   void Dino_BusSand_App_UI_HudPanel__CounterTension (Dino_BusSand_App_UI_HudPanel_o* __this,
   int32_t road, int32_t cap, const MethodInfo* method); */

void Dino_BusSand_App_UI_HudPanel__CounterTension_230ce78(long param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  long *plVar11;
  undefined4 uVar12;
  
  if ((bRam0000000004f9c523 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb50d8);
    FUN_02132f7c(PTR_DAT_04cb50e8);
    FUN_02132f7c(PTR_DAT_04cb6a88);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cafe68);
    bRam0000000004f9c523 = 1;
  }
  puVar2 = PTR_DAT_04cb6a88;
  if ((param_3 < 3) || (param_3 <= param_2)) {
    plVar11 = *(long **)(param_1 + 0x90);
    if ((param_3 < 3) || (param_2 < param_3)) goto LAB_0240cf90;
    lVar3 = *(long *)PTR_DAT_04cb6a88;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    lVar3 = *(long *)(lVar3 + 0xb8);
    bVar1 = false;
    puVar6 = (undefined4 *)(lVar3 + 0x2c);
    puVar8 = (undefined4 *)(lVar3 + 0x30);
    puVar9 = (undefined4 *)(lVar3 + 0x34);
    puVar10 = (undefined4 *)(lVar3 + 0x38);
    uVar12 = _UNK_00e2094c;
  }
  else {
    plVar11 = *(long **)(param_1 + 0x90);
    if (param_2 < param_3 + -1) {
LAB_0240cf90:
      lVar3 = *(long *)PTR_DAT_04cb6a88;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar2;
      }
      lVar3 = *(long *)(lVar3 + 0xb8);
      bVar1 = true;
      puVar6 = (undefined4 *)(lVar3 + 0xc);
      puVar8 = (undefined4 *)(lVar3 + 0x10);
      puVar9 = (undefined4 *)(lVar3 + 0x14);
      puVar10 = (undefined4 *)(lVar3 + 0x18);
      uVar12 = _UNK_00e20994;
    }
    else {
      lVar3 = *(long *)PTR_DAT_04cb6a88;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar2;
      }
      lVar3 = *(long *)(lVar3 + 0xb8);
      bVar1 = false;
      puVar6 = (undefined4 *)(lVar3 + 0x1c);
      puVar8 = (undefined4 *)(lVar3 + 0x20);
      puVar9 = (undefined4 *)(lVar3 + 0x24);
      puVar10 = (undefined4 *)(lVar3 + 0x28);
      uVar12 = _UNK_00e20994;
    }
  }
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x2a8))
              (*puVar6,*puVar8,*puVar9,*puVar10,plVar11,*(undefined8 *)(*plVar11 + 0x2b0));
    puVar2 = PTR_DAT_04ca9ae8;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar3 = UnityEngine_Transform__Find_43d4bec
                        (*(long *)(param_1 + 0x70),*(undefined8 *)PTR_DAT_04cafe68,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar3,0,0);
      if ((uVar4 & 1) == 0) {
        if (lVar3 == 0) goto LAB_0240d138;
        lVar5 = UnityEngine_Component__GetComponent_object__26f97e8
                          (lVar3,*(undefined8 *)PTR_DAT_04cb50d8);
        lVar7 = *(long *)puVar2;
        if (bVar1) {
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac(lVar7);
          }
          uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
          if ((uVar4 & 1) != 0) {
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            UnityEngine_Object__Destroy_43c8114(lVar5,0);
          }
        }
        else {
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac(lVar7);
          }
          uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
          if ((uVar4 & 1) != 0) {
            lVar3 = UnityEngine_Component__get_gameObject_43bcde8(lVar3,0);
            if ((lVar3 == 0) ||
               (lVar5 = UnityEngine_GameObject__AddComponent_object__275a54c
                                  (lVar3,*(undefined8 *)PTR_DAT_04cb50e8), lVar5 == 0))
            goto LAB_0240d138;
            *(undefined8 *)(lVar5 + 0x20) = _UNK_00e6a318;
          }
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
        if ((uVar4 & 1) != 0) {
          if (lVar5 == 0) goto LAB_0240d138;
          *(undefined4 *)(lVar5 + 0x24) = uVar12;
        }
      }
      return;
    }
  }
LAB_0240d138:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

