/* IL2CPP: Dino.BusSand.Core.SimEvent$$ToString
System_String_o* Dino_BusSand_Core_SimEvent__ToString (Dino_BusSand_Core_SimEvent_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SimEvent$$ToString
   System_String_o* Dino_BusSand_Core_SimEvent__ToString (Dino_BusSand_Core_SimEvent_o __this, const
   MethodInfo* method); */

void Dino_BusSand_Core_SimEvent__ToString_241dc64(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puVar2 = PTR_DAT_04cbea78;
  puVar1 = PTR_DAT_04cbea70;
  if ((bRam0000000004f9cb8c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbea70);
    FUN_02132f7c(PTR_DAT_04cbea78);
    bRam0000000004f9cb8c = 1;
  }
  uStack_34 = *param_1;
  uVar3 = FUN_02133100(*(undefined8 *)puVar1,&uStack_34);
  puVar1 = PTR_DAT_04ca9ac8;
  uStack_38 = param_1[1];
  uVar4 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_38);
  uStack_3c = param_1[2];
  uVar5 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_3c);
  System_String__Format_46d352c(*(undefined8 *)puVar2,uVar3,uVar4,uVar5,0);
  return;
}

