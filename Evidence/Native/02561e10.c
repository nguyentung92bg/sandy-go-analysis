/* IL2CPP: Dino.Tracking.ServerTrackingCore$$WriteDictionary
void Dino_Tracking_ServerTrackingCore__WriteDictionary (System_Text_StringBuilder_o* sb, System_Collections_Generic_IDictionary_string__object__o* dict, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025620d0) */
/* IL2CPP: Dino.Tracking.ServerTrackingCore$$WriteDictionary
   void Dino_Tracking_ServerTrackingCore__WriteDictionary (System_Text_StringBuilder_o* sb,
   System_Collections_Generic_IDictionary_string__object__o* dict, const MethodInfo* method); */

void Dino_Tracking_ServerTrackingCore__WriteDictionary_2461e10(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  
  if ((bRam0000000004f9ce29 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cab948);
    FUN_02132f7c(PTR_DAT_04cab950);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04caa310);
    FUN_02132f7c(PTR_DAT_04caa318);
    bRam0000000004f9ce29 = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Text_StringBuilder__Append_46dd710(param_1,0x7b,0);
  if (param_2 != (long *)0x0) {
    lVar5 = *param_2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04cab948) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02561ef8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0216b7a4(param_2,*(long *)PTR_DAT_04cab948,0);
LAB_02561ef8:
    puVar2 = PTR_DAT_04cab950;
    puVar1 = PTR_DAT_04ca9c08;
    plVar4 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
    bVar8 = true;
    do {
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025620c4 to 02662267 has its CatchHandler @ 0255fc7c */
        FUN_02133224();
      }
      lVar5 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02561f78;
          }
          uVar6 = uVar6 - 1;
                    /* try { // try from 02561f54 to 02661f7b has its CatchHandler @ 02562298 */
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_0216b7a4(plVar4,*(long *)puVar1,0);
LAB_02561f78:
      uVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      if ((uVar6 & 1) == 0) {
                    /* try { // try from 0256202c to 02662033 has its CatchHandler @ 02562284 */
        if (plVar4 == (long *)0x0) break;
                    /* try { // try from 0256203c to 02662047 has its CatchHandler @ 02562290 */
        lVar5 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 == 0) goto LAB_02562070;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_02562058;
      }
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar5 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02561fdc;
          }
          uVar6 = uVar6 - 1;
                    /* try { // try from 02561fb8 to 02662003 has its CatchHandler @ 025622a0 */
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_0216b7a4(plVar4,*(long *)puVar2,0);
LAB_02561fdc:
      auVar9 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      uVar6 = System_String__IsNullOrEmpty_46d2084(auVar9._0_8_,0);
      if ((uVar6 & 1) == 0) {
        if (!bVar8) {
          System_Text_StringBuilder__Append_46dd710(param_1,0x2c,0);
        }
                    /* try { // try from 02562014 to 0266201f has its CatchHandler @ 0256228c */
        Dino_Tracking_ServerTrackingCore__WriteValue_2462130(param_1,auVar9._0_8_,auVar9._8_8_);
        bVar8 = false;
      }
    } while( true );
  }
  goto LAB_0256209c;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_02562058:
                    /* try { // try from 0256205c to 026620b7 has its CatchHandler @ 025622a4 */
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04ca9b30) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0256208c;
    }
  }
LAB_02562070:
  puVar3 = (undefined8 *)FUN_0216b7a4(plVar4,*(long *)PTR_DAT_04ca9b30,0);
LAB_0256208c:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_0256209c:
  System_Text_StringBuilder__Append_46dd710(param_1,0x7d,0);
                    /* try { // try from 025620c0 to 026620c3 has its CatchHandler @ 02562294 */
  return;
}

