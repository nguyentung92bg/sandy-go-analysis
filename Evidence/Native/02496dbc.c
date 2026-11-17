/* IL2CPP: Dino.BusSand.View.EndSuctionCue$$.cctor
void Dino_BusSand_View_EndSuctionCue___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.EndSuctionCue$$.cctor
   void Dino_BusSand_View_EndSuctionCue___cctor (const MethodInfo* method); */

void Dino_BusSand_View_EndSuctionCue___cctor_2396dbc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  puVar6 = PTR_DAT_04cbc148;
  puVar5 = PTR_DAT_04cb68b8;
  if ((bRam0000000004f9c8e5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc148);
    FUN_02132f7c(PTR_DAT_04cb68b8);
    bRam0000000004f9c8e5 = 1;
  }
  uVar4 = _UNK_00e6bbf8;
  uVar3 = _UNK_00e6bbf0;
  uVar2 = _UNK_00e6b610;
  uVar1 = _UNK_00e6a5a0;
  puVar9 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
  uVar8 = *(undefined8 *)puVar5;
  puVar9[1] = _UNK_00e6b618;
  *puVar9 = uVar2;
  puVar9[3] = uVar4;
  puVar9[2] = uVar3;
  puVar9[4] = uVar1;
  uVar7 = UnityEngine_Shader__PropertyToID_4372cb4(uVar8,0);
  *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x38) = uVar7;
  return;
}

