/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Light
void Dino_BusSand_App_UI_HomeBus__Light (Dino_BusSand_App_UI_HomeBus_o* __this, UnityEngine_Vector3_o sun, UnityEngine_Material_o* beach, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Light
   void Dino_BusSand_App_UI_HomeBus__Light (Dino_BusSand_App_UI_HomeBus_o* __this,
   UnityEngine_Vector3_o sun, UnityEngine_Material_o* beach, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeBus__Light_22dff60(undefined4 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04ca9ae8;
  lVar3 = *(long *)(param_2 + 0x18);
  if (lVar3 == 0) {
    return;
  }
  if ((bRam0000000004f9c479 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,param_3,0);
    FUN_02132f7c(PTR_DAT_04cb7818);
    FUN_02132f7c(PTR_DAT_04cb7820);
    FUN_02132f7c(PTR_DAT_04cb7828);
    FUN_02132f7c(PTR_DAT_04cb7830);
    bRam0000000004f9c479 = 1;
  }
  uVar5 = *(undefined8 *)(lVar3 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (*(long *)(lVar3 + 0x40) != 0) {
    UnityEngine_Material__SetVector_4383100
              (param_1,*(long *)(lVar3 + 0x40),*(undefined8 *)PTR_DAT_04cb7820,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(param_3,0,0);
    puVar1 = PTR_DAT_04cb7828;
    if ((uVar4 & 1) != 0) {
      return;
    }
    if (param_3 != 0) {
      lVar6 = *(long *)(lVar3 + 0x40);
      UnityEngine_Material__GetColor_4383a34(param_3,*(undefined8 *)PTR_DAT_04cb7828,0);
      if (lVar6 != 0) {
        UnityEngine_Material__SetColor_43830b0(lVar6,*(undefined8 *)puVar1,0);
        puVar1 = PTR_DAT_04cb7818;
        lVar6 = *(long *)(lVar3 + 0x40);
        UnityEngine_Material__GetColor_4383a34(param_3,*(undefined8 *)PTR_DAT_04cb7818,0);
        if (lVar6 != 0) {
          UnityEngine_Material__SetColor_43830b0(lVar6,*(undefined8 *)puVar1,0);
          puVar1 = PTR_DAT_04cb7830;
          lVar3 = *(long *)(lVar3 + 0x40);
          UnityEngine_Material__GetColor_4383a34(param_3,*(undefined8 *)PTR_DAT_04cb7830,0);
          if (lVar3 != 0) {
            uVar2 = UnityEngine_Shader__PropertyToID_4372cb4
                              (*(undefined8 *)puVar1,*(undefined8 *)puVar1,0);
            if ((bRam0000000004fa6d89 & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cf6620);
              FUN_02132f7c(PTR_DAT_04cab588);
              bRam0000000004fa6d89 = 1;
            }
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar6 = *(long *)(lVar3 + 0x10);
            if (lVar6 != 0) {
              if (*(int *)(*(long *)PTR_DAT_04cab588 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              if (pcRam0000000004fa6f70 == (code *)0x0) {
                pcRam0000000004fa6f70 = (code *)FUN_02132f40(&UNK_00e48b6d);
              }
              (*pcRam0000000004fa6f70)(lVar6,uVar2,&stack0xffffffffffffffc0);
              return;
            }
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar3,0);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

