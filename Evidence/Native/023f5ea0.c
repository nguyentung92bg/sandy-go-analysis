/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$SetHeap
void Dino_BusSand_App_UI_HomeToonRig__SetHeap (Dino_BusSand_App_UI_HomeToonRig_o* __this, float fill, UnityEngine_Color_o main, UnityEngine_Color_o shadow, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$SetHeap
   void Dino_BusSand_App_UI_HomeToonRig__SetHeap (Dino_BusSand_App_UI_HomeToonRig_o* __this, float
   fill, UnityEngine_Color_o main, UnityEngine_Color_o shadow, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeToonRig__SetHeap_22f5ea0
               (float param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,long param_6)

{
  bool bVar1;
  undefined *puVar2;
  byte bVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c481 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caa100);
    FUN_02132f7c(PTR_DAT_04caa108);
    FUN_02132f7c(PTR_DAT_04caa120);
    bRam0000000004f9c481 = 1;
  }
  uVar7 = *(undefined8 *)(param_6 + 0x98);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  if ((*(long *)(param_6 + 0x98) != 0) &&
     (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_6 + 0x98),0),
     fVar9 = _UNK_00e207ec, lVar6 != 0)) {
    bVar1 = _UNK_00e207ec < param_1;
    bVar3 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar6,0);
    if (bVar1 != (bool)(bVar3 & 1)) {
      if ((*(long *)(param_6 + 0x98) == 0) ||
         (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_6 + 0x98),0),
         lVar6 == 0)) goto LAB_023f6080;
      UnityEngine_GameObject__SetActive_43c1408(lVar6,fVar9 < param_1,0);
    }
    if (param_1 <= fVar9) {
      return;
    }
    if (*(long *)(param_6 + 0x40) != 0) {
      UnityEngine_Material__SetColor_43830b0
                (param_2,param_3,param_4,param_5,*(long *)(param_6 + 0x40),
                 *(undefined8 *)PTR_DAT_04caa100,0);
      if (*(long *)(param_6 + 0x40) != 0) {
        UnityEngine_Material__SetColor_43830b0
                  (uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,
                   uStack000000000000000c,*(long *)(param_6 + 0x40),*(undefined8 *)PTR_DAT_04caa108,
                   0);
        lVar6 = *(long *)(param_6 + 0x40);
        if (lVar6 != 0) {
          fVar9 = 1.0;
          if (param_1 <= 1.0) {
            fVar9 = param_1;
          }
          fVar10 = 0.0;
          if (0.0 <= param_1) {
            fVar10 = fVar9;
          }
          uVar4 = UnityEngine_Shader__PropertyToID_4372cb4
                            (*(undefined8 *)PTR_DAT_04caa120,*(undefined8 *)PTR_DAT_04caa120,0);
          if ((bRam0000000004fa6d88 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf6620);
            FUN_02132f7c(PTR_DAT_04cab588);
            bRam0000000004fa6d88 = 1;
          }
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar8 = *(long *)(lVar6 + 0x10);
          if (lVar8 != 0) {
            if (*(int *)(*(long *)PTR_DAT_04cab588 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            if (pcRam0000000004fa6f68 == (code *)0x0) {
              pcRam0000000004fa6f68 = (code *)FUN_02132f40(&UNK_00e40218);
            }
                    /* WARNING: Could not recover jumptable at 0x0447fb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa6f68)(fVar10,lVar8,uVar4);
            return;
          }
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar6,0);
        }
      }
    }
  }
LAB_023f6080:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

