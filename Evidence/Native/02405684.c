/* IL2CPP: Dino.BusSand.App.UI.SettingPanel$$get_VersionText
System_String_o* Dino_BusSand_App_UI_SettingPanel__get_VersionText (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.SettingPanel$$get_VersionText
   System_String_o* Dino_BusSand_App_UI_SettingPanel__get_VersionText (const MethodInfo* method); */

long Dino_BusSand_App_UI_SettingPanel__get_VersionText_2305684(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_04caa210;
  if ((bRam0000000004f9c4f8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
                    /* try { // try from 024056ac to 025057e7 has its CatchHandler @ 024056ac
                       catch() { ... } // from try @ 024056ac with catch @ 024056ac
                       catch() { ... } // from try @ 02405808 with catch @ 024056ac
                       catch() { ... } // from try @ 02405834 with catch @ 024056ac
                       catch() { ... } // from try @ 0240585c with catch @ 024056ac
                       catch() { ... } // from try @ 02405880 with catch @ 024056ac */
    FUN_02132f7c(PTR_DAT_04cabc08);
    bRam0000000004f9c4f8 = 1;
  }
  puVar3 = PTR_DAT_04cabc08;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = UnityEngine_Application__get_version_435257c(0);
  lVar6 = *(long *)puVar3;
  if ((lVar6 == 0) || (iVar1 = *(int *)(lVar6 + 0x10), iVar1 == 0)) {
    if ((lVar4 == 0) || (lVar6 = lVar4, *(int *)(lVar4 + 0x10) == 0)) {
      lVar6 = **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
    }
  }
  else if ((lVar4 != 0) && (*(int *)(lVar4 + 0x10) != 0)) {
    lVar5 = thunk_FUN_0216c29c(*(int *)(lVar4 + 0x10) + iVar1,lVar4,0);
    System_String__FillStringChecked_46d2a48(lVar5,0,lVar6);
    System_String__FillStringChecked_46d2a48(lVar5,iVar1,lVar4);
    lVar6 = lVar5;
  }
  return lVar6;
}

