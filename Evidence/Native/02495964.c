/* IL2CPP: Dino.BusSand.View.EndSuctionCue$$.ctor
void Dino_BusSand_View_EndSuctionCue___ctor (Dino_BusSand_View_EndSuctionCue_o* __this, UnityEngine_Transform_o* parent, Dino_BusSand_View_StageLayout_o* layout, UnityEngine_Shader_o* shader, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.EndSuctionCue$$.ctor
   void Dino_BusSand_View_EndSuctionCue___ctor (Dino_BusSand_View_EndSuctionCue_o* __this,
   UnityEngine_Transform_o* parent, Dino_BusSand_View_StageLayout_o* layout, UnityEngine_Shader_o*
   shader, const MethodInfo* method); */

void Dino_BusSand_View_EndSuctionCue___ctor_2395964
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar1 = PTR_DAT_04cbc148;
  if ((bRam0000000004f9c8da & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc148);
    FUN_02132f7c(PTR_DAT_04cbc150);
    FUN_02132f7c(PTR_DAT_04cbc158);
    FUN_02132f7c(PTR_DAT_04cbc160);
    bRam0000000004f9c8da = 1;
  }
  puVar4 = PTR_DAT_04cbc160;
  puVar3 = PTR_DAT_04cbc158;
  puVar2 = PTR_DAT_04cbc150;
  *(undefined4 *)(param_1 + 0x40) = 0xbf800000;
  System_Object___ctor_4870e5c(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x10),param_3);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = Dino_BusSand_View_EndSuctionCue__NewMat_2395ac4(param_4,*(undefined8 *)puVar4,10,0xbcb);
  puVar7 = (undefined8 *)(param_1 + 0x30);
  *puVar7 = uVar5;
  thunk_FUN_02134474(puVar7,uVar5);
  uVar5 = Dino_BusSand_View_EndSuctionCue__NewMat_2395ac4(param_4,*(undefined8 *)puVar2,1,0xbcc);
  puVar6 = (undefined8 *)(param_1 + 0x28);
  *puVar6 = uVar5;
  thunk_FUN_02134474(puVar6,uVar5);
  uVar5 = Dino_BusSand_View_EndSuctionCue__NewQuad_2395c14(*(undefined8 *)puVar4,param_2,*puVar7);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  thunk_FUN_02134474();
  uVar5 = Dino_BusSand_View_EndSuctionCue__NewQuad_2395c14(*(undefined8 *)puVar3,param_2,*puVar6);
  puVar6 = (undefined8 *)(param_1 + 0x18);
  *puVar6 = uVar5;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar6 >> 0xc & 0x3f),
                 ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

