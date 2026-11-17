/* IL2CPP: Dino.BusSand.App.UI.CommonGetPanel.<CloseAfter>d__25$$MoveNext
bool Dino_BusSand_App_UI_CommonGetPanel__CloseAfter_d__25__MoveNext (Dino_BusSand_App_UI_CommonGetPanel__CloseAfter_d__25_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommonGetPanel.<CloseAfter>d__25$$MoveNext
   bool Dino_BusSand_App_UI_CommonGetPanel__CloseAfter_d__25__MoveNext
   (Dino_BusSand_App_UI_CommonGetPanel__CloseAfter_d__25_o* __this, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_CommonGetPanel__CloseAfter_d__25__MoveNext_22aef48
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  
  if ((bRam0000000004f9c2c1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04caca58);
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9c2c1 = 1;
  }
  lVar4 = *(long *)(param_4 + 0x28);
  if (*(int *)(param_4 + 0x10) == 1) {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_4 + 0x10) != 0) {
      return 0;
    }
    fVar7 = *(float *)(param_4 + 0x20);
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (0.0 < fVar7) {
      uVar2 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
      UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(fVar7,uVar2,0);
      *(undefined8 *)(param_4 + 0x18) = uVar2;
      thunk_FUN_02134474((undefined8 *)(param_4 + 0x18),uVar2);
      *(undefined4 *)(param_4 + 0x10) = 1;
      return 1;
    }
  }
  puVar1 = PTR_DAT_04cad948;
  if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)puVar1,0);
  if ((lVar4 != 0) && (lVar5 = *(long *)(lVar4 + 0x38), lVar5 != 0)) {
    if (*(char *)(lVar5 + 0x2c) == '\0') {
LAB_023af0b8:
      lVar5 = *(long *)(lVar5 + 0x38);
      Dino_BusSand_App_UI_UIPanel__Close_21f509c(lVar4,0);
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
      }
      return 0;
    }
    if (*(long *)(lVar5 + 0x10) != 0) {
      if (*(int *)(*(long *)(lVar5 + 0x10) + 0x18) < 1) goto LAB_023af0b8;
      lVar3 = UnityEngine_Component__get_transform_43bcd18(lVar4,0);
      if (lVar3 != 0) {
        uVar6 = UnityEngine_Transform__get_position_43d0e48(lVar3,0);
        uVar2 = *(undefined8 *)(lVar5 + 0x40);
        Dino_BusSand_App_UI_UIPanel__Close_21f509c(lVar4,0);
        Dino_BusSand_App_UI_CommerceRewardFly__Fly_22a8d24
                  (uVar6,param_2,param_3,*(undefined8 *)(lVar5 + 0x10),uVar2,0);
        return 0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

