/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$Awake
void Dino_BusSand_App_QaPilot_Runner__Awake (Dino_BusSand_App_QaPilot_Runner_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$Awake
   void Dino_BusSand_App_QaPilot_Runner__Awake (Dino_BusSand_App_QaPilot_Runner_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_QaPilot_Runner__Awake_2157838(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  int iStack_24;
  
                    /* try { // try from 02257838 to 0235783f has its CatchHandler @ 0225797c */
                    /* try { // try from 02257840 to 02357847 has its CatchHandler @ 0225796c */
  if ((bRam0000000004f9b7ee & 1) == 0) {
                    /* try { // try from 02257850 to 0235790b has its CatchHandler @ 0225797c */
    FUN_02132f7c(PTR_DAT_04caa228);
    FUN_02132f7c(PTR_DAT_04caba10);
    FUN_02132f7c(PTR_DAT_04caba18);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04caba20);
    bRam0000000004f9b7ee = 1;
  }
  iStack_24 = 0;
  uVar3 = Dino_BusSand_App_QaPilot_Runner__get_InDir_2157748();
  System_IO_Directory__CreateDirectory_47f7a70(uVar3,0);
  uVar3 = Dino_BusSand_App_QaPilot_Runner__get_InDir_2157748();
  lVar4 = System_IO_Directory__GetFiles_47f7bf8(uVar3,0);
  iStack_24 = 0;
  if (lVar4 != 0) {
    uVar6 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar6) {
      lVar7 = 0;
      do {
        if (uVar6 <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        System_IO_File__Delete_47f8b84(*(undefined8 *)(lVar4 + 0x20 + lVar7 * 8),0);
        uVar6 = *(uint *)(lVar4 + 0x18);
        lVar7 = lVar7 + 1;
        iStack_24 = (int)lVar7;
      } while (iStack_24 < (int)uVar6);
    }
    uVar3 = Dino_BusSand_App_QaPilot__get_Dir_215673c();
                    /* try { // try from 0225790c to 0235798f has its CatchHandler @ 0225780c */
    if (*(int *)(*(long *)PTR_DAT_04caa228 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = System_IO_Path__Combine_4806e38(uVar3,*(undefined8 *)PTR_DAT_04caba18,0);
    uVar5 = System_IO_Directory__Exists_47ec4f4(uVar3,0);
    if ((uVar5 & 1) != 0) {
      System_IO_Directory__Delete_47f814c(uVar3,1,0);
    }
    uVar3 = Dino_BusSand_App_QaPilot_Runner__get_OutPath_21577c0();
    System_IO_File__WriteAllText_47f90d8(uVar3,*(undefined8 *)PTR_DAT_04ca9c30,0);
    puVar2 = PTR_DAT_04caba20;
    puVar1 = PTR_DAT_04caba10;
                    /* catch() { ... } // from try @ 02257840 with catch @ 0225796c */
                    /* catch() { ... } // from try @ 02257838 with catch @ 0225797c
                       catch() { ... } // from try @ 02257850 with catch @ 0225797c */
    iStack_24 = 1;
    uVar3 = System_Int32__ToString_482d750(&iStack_24,0);
    uVar3 = System_String__Concat_46c82e0(*(undefined8 *)puVar1,uVar3,0);
    Dino_BusSand_App_QaPilot_Runner__Reply_2157ac4(uVar3,*(undefined8 *)puVar2,1,uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

