/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$get_QaBus
System_String_o* Dino_BusSand_App_UI_HomeStage__get_QaBus (Dino_BusSand_App_UI_HomeStage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$get_QaBus
   System_String_o* Dino_BusSand_App_UI_HomeStage__get_QaBus (Dino_BusSand_App_UI_HomeStage_o*
   __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_HomeStage__get_QaBus_22efcf8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  
  lVar5 = *(long *)(param_1 + 0x78);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9c408 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb71b8,0);
    FUN_02132f7c(PTR_DAT_04cb71c0);
    bRam0000000004f9c408 = 1;
  }
  puVar1 = PTR_DAT_04ca9ac8;
  if (*(long *)(lVar5 + 0x18) == 0) {
    uVar2 = *(undefined8 *)PTR_DAT_04cb71b8;
  }
  else {
    uStack_24 = *(undefined4 *)(*(long *)(lVar5 + 0x18) + 0xe4);
    uVar2 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x78),&uStack_24);
    auStack_28[0] = *(undefined1 *)(lVar5 + 0xe0);
    uVar3 = FUN_02133100(*(undefined8 *)(puVar1 + 0x28),auStack_28);
    puVar1 = PTR_DAT_04cb71c0;
    if (*(long *)(lVar5 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar4 = Dino_BusSand_App_UI_HomeToonFace__get_Qa_22f30ac(*(long *)(lVar5 + 0x20),0);
    uVar2 = System_String__Format_46d352c(*(undefined8 *)puVar1,uVar2,uVar3,uVar4,0);
  }
  return uVar2;
}

