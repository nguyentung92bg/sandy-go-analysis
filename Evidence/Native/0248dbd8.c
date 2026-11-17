/* IL2CPP: Dino.BusSand.Util$$Outline
void Dino_BusSand_Util__Outline (TMPro_TMP_Text_o* t, float width, float shadow, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Util$$Outline
   void Dino_BusSand_Util__Outline (TMPro_TMP_Text_o* t, float width, float shadow, const
   MethodInfo* method); */

void Dino_BusSand_Util__Outline_238dbd8(undefined4 param_1,float param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  
  if ((bRam0000000004f9c8b5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbee8);
    FUN_02132f7c(PTR_DAT_04cbbef0);
    FUN_02132f7c(PTR_DAT_04cbbef8);
    FUN_02132f7c(PTR_DAT_04cbbf00);
    FUN_02132f7c(PTR_DAT_04cbbf08);
    FUN_02132f7c(PTR_DAT_04cbbf10);
    FUN_02132f7c(PTR_DAT_04cbbf18);
    FUN_02132f7c(PTR_DAT_04cbbf20);
    FUN_02132f7c(PTR_DAT_04cbbf28);
    bRam0000000004f9c8b5 = 1;
  }
  lVar7 = Dino_BusSand_Util__OwnMaterial_238db58(param_3);
  puVar5 = PTR_DAT_04cbbf10;
  puVar4 = PTR_DAT_04cbbef8;
  puVar3 = PTR_DAT_04cbbef0;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  UnityEngine_Material__EnableKeyword_437cba0(lVar7,*(undefined8 *)PTR_DAT_04cbbf00,0);
                    /* try { // try from 0248dcc0 to 0258de7b has its CatchHandler @ 0248dcc0
                       catch() { ... } // from try @ 0248dcc0 with catch @ 0248dcc0
                       catch() { ... } // from try @ 0248df9c with catch @ 0248dcc0
                       catch() { ... } // from try @ 0248e068 with catch @ 0248dcc0
                       catch() { ... } // from try @ 0248e0d0 with catch @ 0248dcc0 */
  UnityEngine_Material__SetFloat_4383048(param_1,lVar7,*(undefined8 *)puVar4,0);
  uVar2 = _UNK_00e207cc;
  uVar6 = _UNK_00e205f8;
  UnityEngine_Material__SetColor_43830b0
            (_UNK_00e201f4,_UNK_00e205f8,_UNK_00e207cc,0x3f800000,lVar7,*(undefined8 *)puVar5,0);
  UnityEngine_Material__SetFloat_4383048(_UNK_00e20328,lVar7,*(undefined8 *)puVar3,0);
  if (param_2 <= 0.0) {
    return;
  }
  UnityEngine_Material__EnableKeyword_437cba0(lVar7,*(undefined8 *)PTR_DAT_04cbbf18,0);
  uVar1 = _UNK_00e20390;
  UnityEngine_Material__SetColor_43830b0
            (uVar6,_UNK_00e2043c,_UNK_00e20390,param_2,lVar7,*(undefined8 *)PTR_DAT_04cbbf20,0);
  UnityEngine_Material__SetFloat_4383048(_UNK_00e201f8,lVar7,*(undefined8 *)PTR_DAT_04cbbee8,0);
  UnityEngine_Material__SetFloat_4383048(uVar2,lVar7,*(undefined8 *)PTR_DAT_04cbbf28,0);
  uVar6 = UnityEngine_Shader__PropertyToID_4372cb4
                    (*(undefined8 *)PTR_DAT_04cbbf08,*(undefined8 *)PTR_DAT_04cbbf08,0);
  if ((bRam0000000004fa6d88 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf6620);
    FUN_02132f7c(PTR_DAT_04cab588);
    bRam0000000004fa6d88 = 1;
  }
  if (lVar7 != 0) {
    lVar8 = *(long *)(lVar7 + 0x10);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar7,0);
    }
    if (*(int *)(*(long *)PTR_DAT_04cab588 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (pcRam0000000004fa6f68 == (code *)0x0) {
      pcRam0000000004fa6f68 = (code *)FUN_02132f40(&UNK_00e40218);
    }
                    /* WARNING: Could not recover jumptable at 0x0447fb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004fa6f68)(uVar1,lVar8,uVar6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

