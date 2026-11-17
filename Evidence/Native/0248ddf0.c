/* IL2CPP: Dino.BusSand.View.ArtPack$$get_Data
Dino_BusSand_View_ArtPackData_o* Dino_BusSand_View_ArtPack__get_Data (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.ArtPack$$get_Data
   Dino_BusSand_View_ArtPackData_o* Dino_BusSand_View_ArtPack__get_Data (const MethodInfo* method);
    */

undefined8 Dino_BusSand_View_ArtPack__get_Data_238ddf0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar1 = PTR_DAT_04cbbf30;
  if ((bRam0000000004f9c8b6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbf30);
    FUN_02132f7c(PTR_DAT_04cbbf38);
    FUN_02132f7c(PTR_DAT_04cbbf40);
    bRam0000000004f9c8b6 = 1;
  }
  puVar3 = PTR_DAT_04cbbf40;
  puVar2 = PTR_DAT_04cbbf38;
  puVar5 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
  if (*(char *)(puVar5 + 1) == '\0') {
    *(undefined1 *)(puVar5 + 1) = 1;
    uVar4 = UnityEngine_Resources__Load_object__2891e2c(*(undefined8 *)puVar3,*(undefined8 *)puVar2)
    ;
    **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar4;
                    /* try { // try from 0248de7c to 0258dea3 has its CatchHandler @ 0248e098 */
    thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar4);
    puVar5 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
  }
  return *puVar5;
}

